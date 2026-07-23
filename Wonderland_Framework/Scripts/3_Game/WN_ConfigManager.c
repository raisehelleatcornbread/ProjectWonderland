class WN_ConfigManager
{
	protected ref WN_ServerConfig m_ServerConfig;

	void WN_ConfigManager()
	{
		m_ServerConfig = new WN_ServerConfig();
	}

	void Load()
	{
		if (!FileExist(WN_Constants.PROFILE_DIRECTORY))
			MakeDirectory(WN_Constants.PROFILE_DIRECTORY);

		if (FileExist(WN_Constants.CONFIG_FILE))
		{
			JsonFileLoader<WN_ServerConfig>.JsonLoadFile(WN_Constants.CONFIG_FILE, m_ServerConfig);
			WN_Logger.Info("Server configuration loaded.");
		}
		else
		{
			JsonFileLoader<WN_ServerConfig>.JsonSaveFile(WN_Constants.CONFIG_FILE, m_ServerConfig);
			WN_Logger.Info("Default server configuration created.");
		}
	}

	WN_ServerConfig GetServerConfig()
	{
		return m_ServerConfig;
	}
}
