class color {
	idd = 1612;
	name = "color";
	Author = "John <3";
	onunload = "deletevehicle vehicle_color;";

	class controlsbackground {
		class r: RscSlider_john
		{
			idc = 011612;
			onSliderPosChanged = "[] call john_fnc_change_color;";
			sliderRange[] = {0, 1};
			x = 0.418789 * safezoneW + safezoneX;
			y = 0.742 * safezoneH + safezoneY;
			w = 0.131484 * safezoneW;
			h = 0.044 * safezoneH;
		};
		class g: RscSlider_john
		{
			idc = 021612;
			onSliderPosChanged = "[] call john_fnc_change_color;";
			sliderRange[] = {0, 1};
			x = 0.418789 * safezoneW + safezoneX;
			y = 0.797 * safezoneH + safezoneY;
			w = 0.131484 * safezoneW;
			h = 0.044 * safezoneH;
		};
		class b: RscSlider_john
		{
			idc = 031612;
			onSliderPosChanged = "[] call john_fnc_change_color;";
			sliderRange[] = {0, 1};
			x = 0.418789 * safezoneW + safezoneX;
			y = 0.852 * safezoneH + safezoneY;
			w = 0.131484 * safezoneW;
			h = 0.044 * safezoneH;
		};
		class a: RscSlider_john
		{
			idc = 061612;
			onSliderPosChanged = "[] call john_fnc_change_color;";
			sliderRange[] = {0, 10};
			x = 0.418789 * safezoneW + safezoneX;
			y = 0.907 * safezoneH + safezoneY;
			w = 0.131484 * safezoneW;
			h = 0.044 * safezoneH;
		};
	};

	class controls {
		class list_veh: RscListbox
		{
			idc = 051612;
			onLBSelChanged = "[_this select 1] spawn john_fnc_change_vehicle;";
			x = 0.318242 * safezoneW + safezoneX;
			y = 0.742 * safezoneH + safezoneY;
			w = 0.0966797 * safezoneW;
			h = 0.209 * safezoneH;
		};
		class button_valid: RscButton
		{
			idc = -1;
			onbuttonclick = "[] spawn john_fnc_spawn_vehicle;";
			text = "valide"; //--- ToDo: Localize;
			x = 0.569609 * safezoneW + safezoneX;
			y = 0.819 * safezoneH + safezoneY;
			w = 0.0966797 * safezoneW;
			h = 0.099 * safezoneH;
		};
	};
};