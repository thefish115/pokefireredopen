SSAnne_1F_Corridor_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, SSAnne_1F_Corridor_OnTransition
	.byte 0

SSAnne_1F_Corridor_OnTransition::
	setvar VAR_MAP_SCENE_VERMILION_CITY, 1
	end

SSAnne_1F_Corridor_EventScript_WorkerM::
	msgbox SSAnne_1F_Corridor_Text_LeStrongSilentType, MSGBOX_NPC
	end

SSAnne_1F_Corridor_EventScript_Sailor::
	msgbox SSAnne_1F_Corridor_Text_PassengersAreRestless, MSGBOX_NPC
	end
