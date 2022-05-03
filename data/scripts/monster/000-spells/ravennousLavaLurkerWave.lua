local combat = Combat()
combat:setParameter(COMBAT_PARAM_TYPE, COMBAT_FIREDAMAGE)
combat:setParameter(COMBAT_PARAM_EFFECT, CONST_ME_HITBYFIRE)

combat:setArea(createCombatArea({
{0, 1, 1, 1, 0},
{1, 1, 1, 1, 1},
{1, 1, 3, 1, 1},
{1, 1, 1, 1, 1},
{0, 1, 1, 1, 0},
}))

local monsters = {
	"lost gnome",
	"gnome pack crawler"
}

function onTargetTile(cid, pos)
	local tile = Tile(pos)
	if tile then
		local target = tile:getTopCreature()
		if target and target:isMonster() then
			if table.contains(monsters, target:getName():lower()) then
				target:addHealth(-(math.random(0, 1000)))
			end
		end
	end
	return true
end

combat:setCallback(CALLBACK_PARAM_TARGETTILE, "onTargetTile")

local spell = Spell(SPELL_INSTANT)

function spell.onCastSpell(creature, var)
	return combat:execute(creature, var)
end

spell:name("ravennousLavaLurkerWave")
spell:words("###465")
spell:isAggressive(true)
spell:needLearn(true)
spell:needTarget(false)
spell:register()