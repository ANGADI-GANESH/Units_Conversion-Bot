#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <string>

using namespace std;

void lengthconvertor();
void weightconvertor();
void areaconvertor();
void volumeconvertor();
void lengthconverting(double value, int from, int to);
void weightconverting(double value, int from, int to);
void areaconverting(double value, int from, int to);
void volumeconverting(double value, int from, int to);

int main()
{
    string username, password;
    string validUsername = "ganesh";
    string validPassword = "41110095";

    cout << "Enter username: ";
    cin >> username;
    cout << "Enter password: ";
    cin >> password;

    if (username == validUsername && password == validPassword)
    {
        cout << "Login successful!" << endl;

        while (true)
        {
            int option;
            cout << "******Hello! Welcome to Informative Bot******" << endl;
            cout << "********units conversions********" << endl;
            cout << "1. Length converter" << endl;
            cout << "2. Weight converter" << endl;
            cout << "3. Area converter" << endl;
            cout << "4. Volume converter" << endl;
            cout << "5. Exit" << endl;
            cout << "Select one of the converters or exit (1/2/3/4/5): ";
            cin >> option;

            if (option == 5)
            {
                cout << "Thank you! Exiting the conversion." << endl;
                break;
            }

            system("clear");

            switch (option)
            {
            case 1:
                lengthconvertor();
                break;
            case 2:
                weightconvertor();
                break;
            case 3:
                areaconvertor();
                break;
            case 4:
                volumeconvertor();
                break;
            default:
                cout << "Invalid option. Please select a valid converter (1/2/3/4/5)." << endl;
            }
        }
    }
    else
    {
        cout << "Login failed. Invalid username or password." << endl;
    }

    return 0;
}

void lengthconvertor()
{
    cout << "Length Units Conversions " << endl;
    int from, to;
    double value;

    cout << "Available conversions are:" << endl;
    cout << "1. Meter" << endl;
    cout << "2. Centimeter" << endl;
    cout << "3. Kilometer" << endl;
    cout << "4. Millimeter" << endl;
    cout << "Select from which unit to convert: ";
    cin >> from;

    cout << "Enter the value: ";
    cin >> value;

    cout << "Select to which unit it should convert: ";
    cin >> to;

    lengthconverting(value, from, to);
}

void lengthconverting(double value, int from, int to)
{
    double convertedValue;
    if (from == 1)
    {
        if (to == 1)
        {
            convertedValue = value;
            cout << "Converting " << value << " meters is equal to " << convertedValue << " meters"<<endl;
        }
        else if (to == 2)
        {
            convertedValue = value * 100;
            cout << "Converting " << value << " meters is equal to " << convertedValue << " centimeters"<<endl;
        }
        else if (to == 3)
        {
            convertedValue = value / 1000;
            cout << "Converting " << value << " meters is equal to " << convertedValue << " kilometers"<<endl;
        }
        else if (to == 4)
        {
            convertedValue = value * 1000;
            cout << "Converting " << value << " meter is equal to " << convertedValue << " millimeter"<<endl;
        }
    }
    else if (from == 2)
    {
        if (to == 1)
        {
            convertedValue = value / 100;
            cout << "Converting " << value << " centimeters is equal to " << convertedValue << " meters"<<endl;
        }
        else if (to == 2)
        {
            convertedValue = value;
            cout << "Converting " << value << " centimeters is equal to " << convertedValue << " centimeters"<<endl;
        }
        else if (to == 3)
        {
            convertedValue = value / 100000;
            cout << "Converting " << value << " centimeters is equal to " << convertedValue << " kilometers"<<endl;
        }
        else if (to == 4)
        {
            convertedValue = value * 10;
            cout << "Converting " << value << " centimeters is equal to " << convertedValue << " millimeter"<<endl;
        }
    }
    else if (from == 3)
    {
        if (to == 1)
        {
            convertedValue = value * 1000;
            cout << "Converting " << value << " kilometers is equal to " << convertedValue << " meters"<<endl;
        }
        else if (to == 2)
        {
            convertedValue = value * 100000;
            cout << "Converting " << value << " kilometers is equal to " << setprecision(20) << convertedValue << " centimeters"<<endl;
        }
        else if (to == 3)
        {
            convertedValue = value;
            cout << "Converting " << value << " kilometers is equal to " << convertedValue << " kilometers"<<endl;
        }
        else if (to == 4)
        {
            convertedValue = value * 1000000;
            cout << "Converting " << value << " kilometer is equal to " << setprecision(20) << convertedValue << " millimeter"<<endl;
        }
    }
    else if (from == 4)
    {
        if (to == 1)
        {
            convertedValue = value / 1000;
            cout << "Converting " << value << " Millimeter is equal to " << convertedValue << " meters"<<endl;
        }
        else if (to == 2)
        {
            convertedValue = value / 10;
            cout << "Converting " << value << " Millimeter is equal to " << convertedValue << " centimeter"<<endl;
        }
        else if (to == 3)
        {
            int decimalprecision = 2;
            convertedValue = value / 1000000;
            cout << "Converting " << value << " Millimeter is equal to " << setprecision(decimalprecision) << convertedValue << " kilometer"<<endl;
        }
        else if (to == 4)
        {
            convertedValue = value;
            cout << "Converting " << value << " Millimeter is equal to " << convertedValue << " millimeter"<<endl;
        }
    }
}

void weightconvertor()
{
    cout << "Weight Units Conversions " << endl;
    int from, to;
    double value;

    cout << "Available conversions are:" << endl;
    cout << "1. Gram" << endl;
    cout << "2. Kilogram" << endl;
    cout << "3. Milligram" << endl;
    cout << "Select from which unit to convert: ";
    cin >> from;

    cout << "Enter the value: ";
    cin >> value;

    cout << "Select to which unit it should convert: ";
    cin >> to;

    weightconverting(value, from, to);
}

void weightconverting(double value, int from, int to)
{
    double convertedValue;
    if (from == 1)
    {
        if (to == 1)
        {
            convertedValue = value;
            cout << "Converting " << value << " grams is equal to " << convertedValue << " grams"<<endl;
        }
        else if (to == 2)
        {
            convertedValue = value / 1000;
            cout << "Converting " << value << " grams is equal to " << convertedValue << " kilograms"<<endl;
        }
        else if (to == 3)
        {
            convertedValue = value * 1000;
            cout << "Converting " << value << " grams is equal to " << convertedValue << " milligrams"<<endl;
        }
    }
    else if (from == 2)
    {
        if (to == 1)
        {
            convertedValue = value * 1000;
            cout << "Converting " << value << " kilograms is equal to " << convertedValue << " grams"<<endl;
        }
        else if (to == 2)
        {
            convertedValue = value;
            cout << "Converting " << value << " kilograms is equal to " << convertedValue << " kilograms"<<endl;
        }
        else if (to == 3)
        {
            convertedValue = value * 1000000;
            cout << "Converting " << value << " kilograms is equal to " << setprecision(20) << convertedValue << " milligrams"<<endl;
        }
    }
    else if (from == 3)
    {
        if (to == 1)
        {
            convertedValue = value / 1000;
            cout << "Converting " << value << " milligrams is equal to " << convertedValue << " grams"<<endl;
        }
        else if (to == 2)
        {
            convertedValue = value / 1000000;
            cout << "Converting " << value << " milligrams is equal to " << convertedValue << " kilograms"<<endl;
        }
        else if (to == 3)
        {
            convertedValue = value;
            cout << "Converting " << value << " milligrams is equal to " << convertedValue << " milligrams"<<endl;
        }
    }
}

void areaconvertor()
{
    cout << "Area Units Conversions " << endl;
    int from, to;
    double value;

    cout << "Available conversions are:" << endl;
    cout << "1. Square Meter" << endl;
    cout << "2. Square Centimeter" << endl;
    cout << "3. Square Kilometer" << endl;
    cout << "4. Square Millimeter" << endl;
    cout << "Select from which unit to convert: ";
    cin >> from;

    cout << "Enter the value: ";
    cin >> value;

    cout << "Select to which unit it should convert: ";
    cin >> to;

    areaconverting(value, from, to);
}

void areaconverting(double value, int from, int to)
{
    double convertedValue;
    if (from == 1)
    {
        if (to == 1)
        {
            convertedValue = value;
            cout << "Converting " << value << " square meters is equal to " << convertedValue << " square meters"<<endl;
        }
        else if (to == 2)
        {
            convertedValue = value * 10000;
            cout << "Converting " << value << " square meters is equal to " << convertedValue << " square centimeters"<<endl;
        }
        else if (to == 3)
        {
            convertedValue = value / 1000000;
            cout << "Converting " << value << " square meters is equal to " << convertedValue << " square kilometers"<<endl;
        }
        else if (to == 4)
        {
            convertedValue = value * 1000000;
            cout << "Converting " << value << " square meter is equal to " << setprecision(20) << convertedValue << " square  millimeter"<<endl;
        }
    }
    else if (from == 2)
    {
        if (to == 1)
        {
            convertedValue = value / 10000;
            cout << "Converting " << value << " square centimeters is equal to " << convertedValue << " square meters"<<endl;
        }
        else if (to == 2)
        {
            convertedValue = value;
            cout << "Converting " << value << " square centimeters is equal to " << convertedValue << " square centimeters"<<endl;
        }
        else if (to == 3)
        {
            convertedValue = value / 10000000000;
            cout << "Converting " << value << " square centimeters is equal to " << convertedValue << " square kilometers"<<endl;
        }
        else if (to == 4)
        {
            convertedValue = value * 100;
            cout << "Converting " << value << " square centimeters is equal to " << convertedValue << " square millimeters"<<endl;
        }
    }
    else if (from == 3)
    {
        if (to == 1)
        {
            convertedValue = value * 1000000;
            cout << "Converting " << value << " square kilometers is equal to " << convertedValue << " square meters"<<endl;
        }
        else if (to == 2)
        {
            convertedValue = value * 10000000000;
            cout << "Converting " << value << " square kilometers is equal to " << setprecision(20) << convertedValue << " square centimeters"<<endl;
        }
        else if (to == 3)
        {
            convertedValue = value;
            cout << "Converting " << value << " square kilometers is equal to " << convertedValue << " square kilometers"<<endl;
        }
        else if (to == 4)
        {
            convertedValue = value * 1000000000000;
            cout << "Converting " << value << " square kilometers is equal to " << setprecision(20) << convertedValue << " square millimeters"<<endl;
        }
    }
    else if (from == 4)
    {
        if (to == 1)
        {
            convertedValue = value / 1000000;
            cout << "Converting " << value << " square millimeters is equal to " << convertedValue << " square meters"<<endl;
        }
        else if (to == 2)
        {
            convertedValue = value / 100;
            cout << "Converting " << value << " square millimeters is equal to " << convertedValue << " square centimeters"<<endl;
        }
        else if (to == 3)
        {
            convertedValue = value / 1000000000000;
            cout << "Converting " << value << " square millimeters is equal to " << setprecision(20) << convertedValue << " square kilometers"<<endl;
        }
        else if (to == 4)
        {
            convertedValue = value;
            cout << "Converting " << value << " square millimeters is equal to " << convertedValue << " square millimeters"<<endl;
        }
    }
}

void volumeconvertor()
{
    cout << "Volume Units Conversions " << endl;
    int from, to;
    double value;

    cout << "Available conversions are:" << endl;
    cout << "1. Cubic Meter" << endl;
    cout << "2. Cubic Centimeter" << endl;
    cout << "3. Liter" << endl;
    cout << "4. Milliliter" << endl;
    cout << "Select from which unit to convert: ";
    cin >> from;

    cout << "Enter the value: ";
    cin >> value;

    cout << "Select to which unit it should convert: ";
    cin >> to;

    volumeconverting(value, from, to);
}

void volumeconverting(double value, int from, int to)
{
    double convertedValue;
    if (from == 1)
    {
        if (to == 1)
        {
            convertedValue = value;
            cout << "Converting " << value << " cubic meters is equal to " << convertedValue << " cubic meters"<<endl;
        }
        else if (to == 2)
        {
            convertedValue = value * 1000000;
            cout << "Converting " << value << " cubic meters is equal to " << convertedValue << " cubic centimeters"<<endl;
        }
        else if (to == 3)
        {
            convertedValue = value * 1000;
            cout << "Converting " << value << " cubic meters is equal to " << convertedValue << " liters"<<endl;
        }
        else if (to == 4)
        {
            convertedValue = value * 1000000;
            cout << "Converting " << value << " cubic meters is equal to " << convertedValue << " milliliters"<<endl;
        }
    }
    else if (from == 2)
    {
        if (to == 1)
        {
            convertedValue = value / 1000000;
            cout << "Converting " << value << " cubic centimeters is equal to " << convertedValue << " cubic meters"<<endl;
        }
        else if (to == 2)
        {
            convertedValue = value;
            cout << "Converting " << value << " cubic centimeters is equal to " << convertedValue << " cubic centimeters"<<endl;
        }
        else if (to == 3)
        {
            convertedValue = value / 1000;
            cout << "Converting " << value << " cubic centimeters is equal to " << convertedValue << " liters"<<endl;
        }
        else if (to == 4)
        {
            convertedValue = value;
            cout << "Converting " << value << " cubic centimeters is equal to " << convertedValue << " milliliters"<<endl;
        }
    }
    else if (from == 3)
    {
        if (to == 1)
        {
            convertedValue = value / 1000;
            cout << "Converting " << value << " liters is equal to " << convertedValue << " cubic meters"<<endl;
        }
        else if (to == 2)
        {
            convertedValue = value * 1000;
            cout << "Converting " << value << " liters is equal to " << convertedValue << " cubic centimeters"<<endl;
        }
        else if (to == 3)
        {
            convertedValue = value;
            cout << "Converting " << value << " liters is equal to " << convertedValue << " liters"<<endl;
        }
        else if (to == 4)
        {
            convertedValue = value * 1000;
            cout << "Converting " << value << " liters is equal to " << convertedValue << " milliliters"<<endl;
        }
    }
    else if (from == 4)
    {
        if (to == 1)
        {
            convertedValue = value / 1000000;
            cout << "Converting " << value << " milliliters is equal to " << convertedValue << " cubic meters"<<endl;
        }
        else if (to == 2)
        {
            convertedValue = value;
            cout << "Converting " << value << " milliliters is equal to " << convertedValue << " cubic centimeters"<<endl;
        }
        else if (to == 3)
        {
            convertedValue = value / 1000;
            cout << "Converting " << value << " milliliters is equal to " << convertedValue << " liters"<<endl;
        }
        else if (to == 4)
        {
            convertedValue = value;
            cout << "Converting " << value << " milliliters is equal to " << convertedValue << " milliliters"<<endl;
        }
    }
}
