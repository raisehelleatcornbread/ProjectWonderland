modded class MissionServer
{
	override void OnInit()
	{
		super.OnInit();
		WN_Framework.GetInstance().Start();
	}

	override void OnUpdate(float timeslice)
	{
		super.OnUpdate(timeslice);
		WN_Framework.GetInstance().Update(timeslice);
	}

	override void OnMissionFinish()
	{
		WN_Framework.GetInstance().Stop();
		super.OnMissionFinish();
	}
}
