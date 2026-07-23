class WN_Framework
{
	protected static ref WN_Framework s_Instance;
	protected ref WN_ModuleManager m_ModuleManager;
	protected ref WN_ConfigManager m_ConfigManager;
	protected bool m_Started;

	static WN_Framework GetInstance()
	{
		if (!s_Instance)
			s_Instance = new WN_Framework();

		return s_Instance;
	}

	void WN_Framework()
	{
		m_ModuleManager = new WN_ModuleManager();
		m_ConfigManager = new WN_ConfigManager();
		m_Started = false;
	}

	void Start()
	{
		if (m_Started)
			return;

		WN_Logger.Info(WN_Constants.FRAMEWORK_NAME + " " + WN_Constants.FRAMEWORK_VERSION + " initializing.");
		m_ConfigManager.Load();

		WN_ServerConfig config = m_ConfigManager.GetServerConfig();
		if (config.EnableBootstrapModule)
			m_ModuleManager.RegisterModule(new WN_BootstrapModule());

		m_ModuleManager.LoadModules();
		m_Started = true;
		WN_Logger.Info("Framework ready. Registered modules: " + m_ModuleManager.GetModuleCount());
	}

	void Update(float deltaTime)
	{
		if (m_Started)
			m_ModuleManager.UpdateModules(deltaTime);
	}

	void Stop()
	{
		if (!m_Started)
			return;

		WN_Logger.Info("Framework shutting down.");
		m_ModuleManager.ShutdownModules();
		m_Started = false;
	}

	WN_ModuleManager GetModuleManager()
	{
		return m_ModuleManager;
	}

	WN_ConfigManager GetConfigManager()
	{
		return m_ConfigManager;
	}
}
