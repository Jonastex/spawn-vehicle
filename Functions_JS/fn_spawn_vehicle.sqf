private _pos = getpos vehicle_color;
private _classname = typeof vehicle_color;
private _texture = (getObjectTextures vehicle_color) select 0;
private _dir = getdir vehicle_color;

deleteVehicle vehicle_color;

waitUntil {isNull vehicle_color};

private _veh = _classname createVehicle _pos;
_veh setpos _pos;
_veh setDir _dir;
_veh setObjectTexture [0, _texture];

closeDialog 0;

hint "Your vehicle is ready !";