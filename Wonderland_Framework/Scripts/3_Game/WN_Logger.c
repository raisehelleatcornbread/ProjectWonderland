class WN_Logger
{
	static void Info(string message)
	{
		Print("[Wonderland][INFO] " + message);
	}

	static void Warning(string message)
	{
		Print("[Wonderland][WARNING] " + message);
	}

	static void Error(string message)
	{
		Print("[Wonderland][ERROR] " + message);
	}

	static void Debug(string message)
	{
		Print("[Wonderland][DEBUG] " + message);
	}
}
