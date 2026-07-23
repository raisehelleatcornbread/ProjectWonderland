class WN_Module
{
	protected string m_Name;
	protected bool m_Enabled;
	protected bool m_Loaded;

	void WN_Module()
	{
		m_Name = "Unnamed";
		m_Enabled = true;
		m_Loaded = false;
	}

	string GetName()
	{
		return m_Name;
	}

	void SetName(string name)
	{
		m_Name = name;
	}

	bool IsEnabled()
	{
		return m_Enabled;
	}

	bool IsLoaded()
	{
		return m_Loaded;
	}

	void SetEnabled(bool enabled)
	{
		m_Enabled = enabled;
	}

	void OnLoad()
	{
		m_Loaded = true;
		WN_Logger.Info("Module loaded: " + m_Name);
	}

	void OnUnload()
	{
		m_Loaded = false;
		WN_Logger.Info("Module unloaded: " + m_Name);
	}

	void OnUpdate(float deltaTime)
	{
	}
}
