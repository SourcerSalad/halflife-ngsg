#include "extdll.h"
#include "util.h"
#include "cbase.h"
#include "player.h"
#include "items.h"

class CCanister : public CItem
{
	void Spawn() override;
	void Precache() override;
	bool MyTouch(CBasePlayer* pPlayer) override;
};

LINK_ENTITY_TO_CLASS(canister, CCanister);

void CCanister::Spawn()
{
	Precache();
	SET_MODEL(ENT(pev), "models/cankit.mdl");

	CItem::Spawn();
}

void CCanister::Precache()
{
	PRECACHE_MODEL("models/cankit.mdl");
	PRECACHE_SOUND("items/suitchargeok1.wav");
}

bool CCanister::MyTouch(CBasePlayer* pPlayer)
{
	if (pPlayer->pev->deadflag != DEAD_NO)
	{
		return false;
	}
	pPlayer->ChangeRawMat(1);

	// Play pickup sound
	EMIT_SOUND(ENT(pPlayer->pev), CHAN_ITEM, "items/suitchargeok1", 1, ATTN_NORM);

	UTIL_Remove(this);

	return false;
}