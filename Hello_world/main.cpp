// #include <iostream>
// #include <string>
// using namespace std;

// string namer[100];
// int q_arr[100];
// int p_arr[100];
// int maxxx=5;

// void a_p()
// {
//     int id;
//     string name;
//     int quantity;
//     int price;
//     cout << "Input Id, Name, Quantity, Price:" << "  " << endl;
//     cin >> id >> name >> quantity >> price;
//     if (id>maxxx)
//     {
//         maxxx=id;
//     }
//     namer[id]=name;
//     q_arr[id]=quantity;
//     p_arr[id]=price;
// }

// void d_p(int maxxx)
// {
//     cout << "Id" << "    " << "Name" << "   " << "Quantity" << "   " << "Price" << "   " << endl;
//     for (int i=0; i<=maxxx; i++)
//         cout << i << "\t" << namer[i] << "\t" << q_arr[i] << "\t" << p_arr[i] << "\t" << endl;
// }


// void e_p()
// {
//     int id;
//     string name;
//     int quantity;
//     int price;
//     cout << "Input id :" << "  " << endl;
//     cin >> id;
//     if (id>maxxx)
//     {
//         maxxx=id;
//     }

//     cout << "Input new name" << " ";
//     cin >> name;
//     namer[id] = name;

//     cout << "Input new quantity" << " ";
//     cin >> quantity;
//     q_arr[id] = quantity;

//     cout << "Input new price" << " ";
//     cin >> price;
//     p_arr[id]=price;


// }

// void del_p()
// {
//     int id;
//     cout << "Input Id :" << "  " << endl;
//     cin >> id;
//     if (id>maxxx)
//     {
//         maxxx=id;
//     }
//     namer[id]=" ";
//     p_arr[id]=0;
//     q_arr[id]=0;
// }

// bool leave (string choice)
// {
//     if (choice=="y" or choice=="Y" or choice=="yes")
//         return false;
//     else if (choice=="n" or choice=="N" or choice=="no")
//         return true;
//     else
//     {
//         cout << "Invalid Input,Please Try Again!" << endl;
//         return true;
//     }
// }

// int calculateTotalQuantity()
// {
//     int totalQuantity = 0;
//     for (int i = 0; i <= maxxx; i++)
//     {
//         totalQuantity += q_arr[i];
//     }
//     return totalQuantity;
// }

// int calculateTotalPrice()
// {
//     int totalPrice = 0;
//     for (int i = 0; i <= maxxx; i++)
//     {
//         totalPrice += p_arr[i];
//     }
//     return totalPrice;
// }

// bool menu()
// {
//     int x;
//     string choice;
//     bool working=true;
//     cout<<" \t\t\t\t\t  \t   ";
//     cout << "Product Management System\n\n";
//     cout << "Instructions:\n\n";
//     cout << "* ID can only contain digits.\n\n";
//     cout << "* Same is the case for QUANTITY and PRICE.\n\n";
//     cout << "* Try not to enter any alphabets or a collection of alphabets (words), as it will cause the loop to run infinitely.\n\n";
//     cout << "* NAME can only contain alphabets or words.\n\n";
//     cout << "* Try not to enter any digits, as it will cause the loop to run infinitely.\n\n";
//     cout << "Note:\n     Incase if you got stuck in an unending cycle of output, exit the terminal (output screen) and try again.\n\n";
//     cout << "Enter from the suitable options:" << endl;
//     cout << endl;
//     cout << "1- Add Products" << endl;
//     cout << "2- Display Catalogue" << endl;
//     cout << "3- Edit Product details" << endl;
//     cout << "4- Delete Products" << endl;
//     cout << "5- Sum Of Products" << endl;
//     cout << "6- Exit PMS "<< endl;
//     cout << endl;

//     cin >> x;

//     switch (x)
//     {
//     case 1:
//         a_p();
//         break;
//     case 2:
//         d_p(maxxx);
//         break;
//     case 3:
//         e_p();
//         break;
//     case 4:
//         del_p();
//         break;
//     case 5:
//     {
//         int totalQuantity = calculateTotalQuantity();
//         int totalPrice = calculateTotalPrice();
//         cout << "Total Quantity: " << totalQuantity << endl;
//         cout << "Total Price: " << totalPrice << endl;
//     }
//     case 6:
//         string choice;
//         cout << endl;
//         cout << "Confirm Yes or No:" << " ";
//         cin >> choice;
//         working = leave(choice);
//     }
//     return working;
// }

// int main ()
// {
//     bool working = true;
//     while (working)
//     {
//         working=menu();
//     }
//     return 0;
// }


#include<iostream>
using namespace std;
int main()

{
int n1=0;
int n2=0;
int n=0;
cout<<" Input range to find fibonacci series: "<<endl;
cin>> n ;
int store=0;
int sum=0;
for (int i = 1; i <= n; i++)
{
    store=n1+n2;
    n1=n2;
    n2=store;
    cout<<store<<endl;
    sum+=store;
}
cout<<"The Sum Of Fibonacci Series Till "<<n<<" Is "<<sum<<endl;
return 0;
}