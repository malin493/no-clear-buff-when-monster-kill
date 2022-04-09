//find
void			ClearAffect(bool bSave=false);

//change
#ifdef NO_CLEAR_BUFF_WHEN_MONSTER_KILL
		void			ClearAffect(bool bSave=false, bool letBuffs = false);
#else
		void			ClearAffect(bool bSave=false);
#endif