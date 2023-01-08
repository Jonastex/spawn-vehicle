private _class = param [0];

createDialog "color";

waitUntil {!isNull (findDisplay 1612)};

_list = (findDisplay 1612) displayCtrl 051612;

private _veh = getArray (missionConfigFile >> "vehicle" >> _class >> "vehicle");
{
	_list lbAdd (getText (configFile >> "CfgVehicles" >> _x >> "DisplayName"));
	_list lbSetData [((lbSize _list) - 1), _x];

} forEach _veh;

_list lbSetSelected [0, true]; 

vehicle_color = (_veh select 0) createVehicleLocal ((getArray (missionConfigFile >> "vehicle" >> _class >> "position")));
vehicle_color setDir ((getdir player) - 180);
