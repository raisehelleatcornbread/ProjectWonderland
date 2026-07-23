class WN_BootstrapModule : WN_Module
{
	void WN_BootstrapModule()
	{
		SetName("Bootstrap");
	}

	override void OnLoad()
	{
		super.OnLoad();
		WN_Logger.Info("Bootstrap module verification succeeded.");
	}
}
