#include<iostream>
#include<iomanip>
#include<stdlib.h>
#include<string>

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
    string validPassword = "hclproject";
    cout << "Enter username: ";
    cin >> username;
    cout << "Enter password: ";
    cin >> password;

    
    if (username == validUsername && password == validPassword) 
    {   
        
        cout << "Login successful!" <<endl;
        int option;
        cout<<"******Hello! Welcome to Informative Bot******"<<endl;
        cout<<"********units conversions********"<<endl;
        cout<<"1.Length convertor"<<endl;
        cout<<"2.Weight convertor"<<endl;
        cout<<"3.Area convertor"<<endl;
        cout<<"4.Volume convertor"<<endl;
        cout<<"select above the one of the convertor: ";
        cin>>option;
        system("clear");  
    switch(option)
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
    break;
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
    cout << "4. Millimeter"<<endl;
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
        cout << "Converting " << value << " meters is equal to " << convertedValue << " meters";
    } 
    else if (to == 2)
    {
        convertedValue = value * 100;
        cout << "Converting " << value << " meters is equal to " << convertedValue << " centimeters";
    } 
    else if (to == 3) 
    {
        convertedValue = value / 1000;
        cout << "Converting " << value << " meters is equal to " << convertedValue << " kilometers";
    }
    else if (to == 4)
    {
        convertedValue = value * 1000;
        cout << "Converting " << value << " meter is equal to " << convertedValue << " millimeter";
    }
} 
else if (from == 2)
{
    if (to == 1)
    {
        convertedValue = value / 100;
        cout << "Converting " << value << " centimeters is equal to " << convertedValue << " meters";
    } 
    else if (to == 2)
    {
        convertedValue = value;
        cout << "Converting " << value << " centimeters is equal to " << convertedValue << " centimeters";
    }
    else if (to == 3) 
    {
        convertedValue = value / 100000;
        cout << "Converting " << value << " centimeters is equal to " << convertedValue << " kilometers";
    }
    else if (to == 4)
    {
        convertedValue = value * 10;
        cout << "Converting " << value << " centimeters is equal to " << convertedValue << " millimeter";
    }
}
else if (from == 3) 
{
    if (to == 1)
    {
        convertedValue = value * 1000;
        cout << "Converting " << value << " kilometers is equal to " << convertedValue << " meters";
    } 
    else if (to == 2)
    {
        convertedValue = value * 100000;
        cout << "Converting " << value << " kilometers is equal to " <<setprecision(20)<< convertedValue << " centimeters";
    } 
    else if (to == 3)
    {
        convertedValue = value;
        cout << "Converting " << value << " kilometers is equal to " << convertedValue << " kilometers";
    }
    else if (to == 4)
    {
        convertedValue = value * 1000000;
        cout << "Conerting " << value << " kilometer is equal to " <<setprecision(20) << convertedValue << " millimeter";
    }
}
else if (from == 4)
{
    if (to == 1)
    {
        convertedValue = value / 1000;
        cout << "Converting "<<value<<" Millimeter is equal to "<<convertedValue<<" meters";
    }
    else if(to == 2)
    {
        convertedValue = value / 10;
        cout << "Converting "<<value<<" Millimeter is equal to "<<convertedValue<<" centimeter";
    }
    else if(to == 3)
    {
        int decimalprecision=2;
        convertedValue = value / 1000000;
        cout << "Converting "<<value<<" Millimeter is equal to "<<setprecision(decimalprecision)<<convertedValue<<" kilometer";
    }
    else if(to == 4)
    {
        convertedValue = value;
        cout << "Converting "<<value<<" Millimeter is equal to "<<convertedValue<<" millimeter";
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
        cout << "Converting " << value << " grams is equal to " << convertedValue << " grams";
    } 
    else if (to == 2)
    {
        convertedValue = value / 1000;
        cout << "Converting " << value << " grams is equal to " << convertedValue << " kilograms";
    } 
    else if (to == 3) 
    {
        convertedValue = value * 1000;
        cout << "Converting " << value << " grams is equal to " << convertedValue << " milligrams";
    }
    
} 
else if (from == 2)
{
    if (to == 1)
    {
        convertedValue = value * 1000;
        cout << "Converting " << value << " kilograms is equal to " << convertedValue << " grams";
    } 
    else if (to == 2)
    {
        convertedValue = value;
        cout << "Converting " << value << " kilograms is equal to " << convertedValue << " kilograms";
    }
    else if (to == 3) 
    {
        convertedValue = value * 1000000;
        cout << "Converting " << value << " kilograms is equal to " << setprecision(20) << convertedValue << " milligrams";
    }
    
}
else if (from == 3) 
{
    if (to == 1)
    {
        convertedValue = value / 1000;
        cout << "Converting " << value << " milligrams is equal to " << convertedValue << " grams";
    } 
    else if (to == 2)
    {
        convertedValue = value / 1000000;
        cout << "Converting " << value << " milligrams is equal to " << convertedValue << " kilograms";
    } 
    else if (to == 3)
    {
        convertedValue = value;
        cout << "Converting " << value << " milligrams is equal to " << convertedValue << " milligrams";
    }
    
}
}
void areaconvertor()
{
    cout << "Area Units Conversions " << endl;
int from, to;
double value;

cout << "Available conversions are:" << endl;
cout << "1.Square Meter" << endl;
cout << "2.Square Centimeter" << endl;
cout << "3.Square Kilometer" << endl;
cout << "4.Square Millimeter"<<endl;
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
        cout << "Converting " << value << " square meters is equal to " << convertedValue << " square meters";
    } 
    else if (to == 2)
    {
        convertedValue = value * 10000;
        cout << "Converting " << value << " square meters is equal to " << convertedValue << " square centimeters";
    } 
    else if (to == 3) 
    {
        convertedValue = value / 1000000;
        cout << "Converting " << value << " square meters is equal to " <<convertedValue << " square kilometers";
    }
    else if (to == 4)
    {
        convertedValue = value * 1000000;
        cout << "Converting " << value << " square meter is equal to " <<setprecision(20)<<convertedValue << " square  millimeter";
    }
} 
else if (from == 2)
{
    if (to == 1)
    {
        convertedValue = value / 10000;
        cout << "Converting " << value << " square centimeters is equal to " << convertedValue << " square meters";
    } 
    else if (to == 2)
    {
        convertedValue = value;
        cout << "Converting " << value << " square centimeters is equal to " << convertedValue << " square centimeters";
    }
    else if (to == 3) 
    {
        convertedValue = value / 10000000000;
        cout << "Converting " << value << " square centimeters is equal to " << convertedValue << " square kilometers";
    }
    else if (to == 4)
    {
        convertedValue = value * 100;
        cout << "Converting " << value << " square centimeters is equal to " << convertedValue << " square millimeter";
    }
}
else if (from == 3) 
{
    if (to == 1)
    {
        convertedValue = value * 1000000;
        cout << "Converting " << value << " square kilometers is equal to " <<setprecision(20)<<convertedValue << " square meters";
    } 
    else if (to == 2)
    {
        convertedValue = value * 10000000000;
        cout << "Converting " << value << " square kilometers is equal to " <<setprecision(20)<<convertedValue << " square centimeters";
    } 
    else if (to == 3)
    {
        convertedValue = value;
        cout << "Converting " << value << " square kilometers is equal to " << convertedValue << " square kilometers";
    }
    else if (to == 4)
    {
        convertedValue = value * 1000000000000;
        cout << "Conerting " << value << " square kilometer is equal to " <<setprecision(20)<< convertedValue << " square millimeter";
    }
}
else if (from == 4)
{
    if (to == 1)
    {
        convertedValue = value / 1000000;
        cout << "Converting "<<value<<" Square Millimeter is equal to "<< convertedValue<<" square meters";
    }
    else if(to == 2)
    {
        convertedValue = value / 100;
        cout << "Converting "<<value<<" Square Millimeter is equal to "<< convertedValue<<" square centimeter";
    }
    else if(to == 3)
    {
        convertedValue = value / 1000000000000;
        cout << "Converting "<<value<<" Square Millimeter is equal to "<< convertedValue<<" square kilometer";
    }
    else if(to == 4)
    {
        convertedValue = value;
        cout << "Converting "<<value<<" Square Millimeter is equal to "<< convertedValue<<" square millimeter";
    }
}
}
void volumeconvertor()
{
    cout << "Volume  Units Conversions " << endl;
int from, to;
double value;

cout << "Available conversions are:" << endl;
cout << "1.Cubic Meter" << endl;
cout << "2.Cubic Centimeter" << endl;
cout << "3.Cubic Kilometer" << endl;
cout << "4.Cubic Millimeter"<<endl;
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
        cout << "Converting " << value << " cubic meters is equal to " << convertedValue << " cubic meters";
    } 
    else if (to == 2)
    {
        convertedValue = value * 1000000;
        cout << "Converting " << value << " cubic meters is equal to " <<setprecision(20)<< convertedValue << " cubic centimeters";
    } 
    else if (to == 3) 
    {
        convertedValue = value / 1000000000;
        cout << "Converting " << value << " cubic meters is equal to " << convertedValue << " cubic kilometers ";
    }
    else if (to == 4)
    {
        convertedValue = value * 1000000000;
        cout << "Converting " << value << " cubic meter is equal to " << convertedValue << " cubic  millimeter";
    }
} 
else if (from == 2)
{
    if (to == 1)
    {
        convertedValue = value / 1000000;
        cout << "Converting " << value << " cubic centimeters is equal to " << convertedValue << " cubic meters";
    } 
    else if (to == 2)
    {
        convertedValue = value;
        cout << "Converting " << value << " cubic centimeters is equal to " << convertedValue << " cubic centimeters";
    }
    else if (to == 3) 
    {
        convertedValue = value / 10000000000000000;
        cout << "Converting " << value << " cubic centimeters is equal to " << convertedValue << " cubic kilometers";
    }
    else if (to == 4)
    {
        convertedValue = value * 1000;
        cout << "Converting " << value << " cubic centimeters is equal to " << convertedValue << " cubic millimeter";
    }
}
else if (from == 3) 
{
    if (to == 1)
    {
        convertedValue = value * 1000000000;
        cout << "Converting " << value << " cubic kilometers is equal to " <<setprecision(20)<< convertedValue << " cubic meters";
    } 
    else if (to == 2)
    {
        convertedValue = value * 1000000000000000;
        cout << "Converting " << value << " cubic kilometers is equal to " <<setprecision(20)<< convertedValue << " cubic centimeters";
    } 
    else if (to == 3)
    {
        convertedValue = value;
        cout << "Converting " << value << " cubic kilometers is equal to " << convertedValue << " cubic kilometers";
    }
    else if (to == 4)
    {
        convertedValue = value * 1000000000000000000;
        cout << "Conerting " << value << " cubic kilometer is equal to " <<setprecision(20)<< convertedValue << " cubic millimeter";
    }
}
else if (from == 4)
{
    if (to == 1)
    {
        convertedValue = value / 1000000000;
        cout << "Converting "<<value<<" cubic Millimeter is equal to "<<convertedValue<<" cubic meters";
    }
    else if(to == 2)
    {
        convertedValue = value / 1000;
        cout << "Converting "<<value<<" cubic Millimeter is equal to "<<convertedValue<<" cubic centimeter";
    }
    else if(to == 3)
    {
        convertedValue = value / 1000000000000000000;
        cout << "Converting "<<value<<" cubic Millimeter is equal to "<<convertedValue<<" cubic kilometer";
    }
    else if(to == 4)
    {
        convertedValue = value;
        cout << "Converting "<<value<<" cubic Millimeter is equal to "<<convertedValue<<" cubic millimeter";
    }
}
}






