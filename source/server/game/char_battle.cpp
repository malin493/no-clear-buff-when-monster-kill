//find
	ClearAffect(true);

//change
#ifdef NO_CLEAR_BUFF_WHEN_MONSTER_KILL
	if (pkKiller && IsPC() && !pkKiller->IsPC())
	{
		ClearAffect(true, true);
	}
	else
	{
		ClearAffect(true);
	}
#else
	ClearAffect(true);
#endif