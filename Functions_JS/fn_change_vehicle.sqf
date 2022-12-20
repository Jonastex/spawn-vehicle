private _index = param [0];

private _pos = getpos vehicle_color;
private _dir = getDir vehicle_color;

deleteVehicle vehicle_color;
private _classname = lbData [051612, _index];

waitUntil {isNull vehicle_color};

vehicle_color = _classname createVehicleLocal _pos;
vehicle_color setpos _pos;
vehicle_color setDir _dir;