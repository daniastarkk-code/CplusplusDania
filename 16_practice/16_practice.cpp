#include <iostream>
using namespace std;

struct WashingMachine {
    char brand[50];
    char color[50];
    double width;
    double length;
    double height;
    int power;
    int spinSpeed;
    int heatingTemperature;
};

void inputWashMach(WashingMachine& wm) {
    cout << "Brand: "; cin >> wm.brand;
    cout << "Color: "; cin >> wm.color;
    cout << "Width (cm): "; cin >> wm.width;
    cout << "Lenth (cm): "; cin >> wm.length;
    cout << "Height (cm): "; cin >> wm.height;
    cout << "Capacity (watt): "; cin >> wm.power;
    cout << "Spining speed (sp/sec): "; cin >> wm.spinSpeed;
    cout << "Heating temperature (°C): "; cin >> wm.heatingTemperature;
}

void ShowWashMach(const WashingMachine& wm) {
    cout << "\n---Washing machine---\n"
        << "Brand: " << wm.brand << "\n"
        << "Color: " << wm.color << "\n"
        << "Size (WxLxH): " << wm.width << "x" << wm.length << "x" << wm.height << " cm\n"
        << "Capacity: " << wm.power << " Watts\n"
        << "Spining speed: " << wm.spinSpeed << " sp/sec\n"
        << "Heating temperature: " << wm.heatingTemperature << " °C\n\n";
}

struct Iron {
    char brand[50];
    char model[50];
    char color[50];
    int minTemperature;
    int maxTemperature;
    bool hasSteamSupply;
    int power;
};

void inputIron(Iron& iron) {
    cout << "Brand: "; cin >> iron.brand;
    cout << "Model: "; cin >> iron.model;
    cout << "Color: "; cin >> iron.color;
    cout << "Min temperature (°C): "; cin >> iron.minTemperature;
    cout << "Max temperature (°C): "; cin >> iron.maxTemperature;
    cout << "Steam output (1 - yes, 0 - no): "; cin >> iron.hasSteamSupply;
    cout << "Capacity (watt): "; cin >> iron.power;
}

void ShowIron(const Iron& iron) {
    cout << "\n--- Iron ---\n"
        << "Brand: " << iron.brand << "\n"
        << "Model: " << iron.model << "\n"
        << "Color: " << iron.color << "\n"
        << "Temperature: from " << iron.minTemperature << " °C to " << iron.maxTemperature << " °C\n"
        << "Steam output: " << (iron.hasSteamSupply ? "Yes" : "No") << "\n"
        << "Capacity: " << iron.power << " Watt\n\n";
}

struct Boiler {
    char brand[50];
    char color[50];
    int power;
    double volume;
    int heatingTemperature;
};

void inputBoiler(Boiler& boiler) {
    cout << "Brand: "; cin >> boiler.brand;
    cout << "Color: "; cin >> boiler.color;
    cout << "Capacity (watt): "; cin >> boiler.power;
    cout << "Volume (l): "; cin >> boiler.volume;
    cout << "Heating temperature (°C): "; cin >> boiler.heatingTemperature;
}

void ShowBoiler(const Boiler& boiler) {
    cout << "\n--- Boiler ---\n"
        << "Brand: " << boiler.brand << "\n"
        << "Color: " << boiler.color << "\n"
        << "Capacity: " << boiler.power << " Watt\n"
        << "Volume: " << boiler.volume << " l\n"
        << "Heating temperature: " << boiler.heatingTemperature << " °C\n";
}

int main() {
	cout << "Task 1\n";
	cout << "Enter information about washing machine:\n";

	WashingMachine washer0 = { "Samsung", "White", 60, 60, 85, 2000, 1200, 90 };
    WashingMachine washer;
    inputWashMach(washer);
    ShowWashMach(washer);

	cout << "Task 2\n";
	cout << "Enter information about iron:\n";

	Iron iron0 = { "Tefal", "Blask", "Black", 120, 220, true, 2400 };
    Iron iron;
    inputIron(iron);
    ShowIron(iron);

	cout << "Task 3\n";
	cout << "Enter information about boiler:\n";

	Boiler boiler0 = { "Polaris", "White", 2000, 5, 100 };
    Boiler boiler;
    inputBoiler(boiler);
    ShowBoiler(boiler);

}

