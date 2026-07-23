class WN_ModuleManager
{
	protected ref array<ref WN_Module> m_Modules;

	void WN_ModuleManager()
	{
		m_Modules = new array<ref WN_Module>();
	}

	bool RegisterModule(WN_Module module)
	{
		if (!module)
		{
			WN_Logger.Error("Attempted to register an invalid module.");
			return false;
		}

		if (GetModule(module.GetName()))
		{
			WN_Logger.Warning("Module already registered: " + module.GetName());
			return false;
		}

		m_Modules.Insert(module);
		WN_Logger.Info("Module registered: " + module.GetName());
		return true;
	}

	void LoadModules()
	{
		foreach (WN_Module module : m_Modules)
		{
			if (module.IsEnabled() && !module.IsLoaded())
				module.OnLoad();
		}
	}

	void UpdateModules(float deltaTime)
	{
		foreach (WN_Module module : m_Modules)
		{
			if (module.IsEnabled() && module.IsLoaded())
				module.OnUpdate(deltaTime);
		}
	}

	void ShutdownModules()
	{
		for (int index = m_Modules.Count() - 1; index >= 0; index--)
		{
			WN_Module module = m_Modules.Get(index);
			if (module && module.IsLoaded())
				module.OnUnload();
		}
	}

	WN_Module GetModule(string name)
	{
		foreach (WN_Module module : m_Modules)
		{
			if (module.GetName() == name)
				return module;
		}

		return null;
	}

	int GetModuleCount()
	{
		return m_Modules.Count();
	}
}
