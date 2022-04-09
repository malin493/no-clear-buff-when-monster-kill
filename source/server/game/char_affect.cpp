//find
void CHARACTER::ClearAffect(bool bSave)

//change
#ifdef NO_CLEAR_BUFF_WHEN_MONSTER_KILL
void CHARACTER::ClearAffect(bool bSave, bool letBuffs)
#else
void CHARACTER::ClearAffect(bool bSave)
#endif

//find
			if ( IS_NO_CLEAR_ON_DEATH_AFFECT(pkAff->dwType) || IS_NO_SAVE_AFFECT(pkAff->dwType) )
			{
				++it;
				continue;
			}
			
//add after
#ifdef NO_CLEAR_BUFF_WHEN_MONSTER_KILL
			if ((pkAff->dwType == SKILL_KWAESOK || pkAff->dwType == SKILL_JEUNGRYEOK || pkAff->dwType == SKILL_HOSIN || pkAff->dwType == SKILL_REFLECT 
				|| pkAff->dwType == SKILL_GICHEON))
			{
				++it;
				continue;
			}
#endif