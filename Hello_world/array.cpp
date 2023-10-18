                              //2(a)
#include <iostream>
using namespace std;

int main() 
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    
    int digit;
    cout<<endl;
    cout << "Digits separated: ";
    cout<<endl;
    while (num > 0) 
    {
        digit = num % 10;
        cout << endl << digit << endl;
        num = num / 10;
    }
    return 0;
}
                              //2(b)
#include <iostream>
using namespace std;
int main()
{
    int ul,i,x;
    int es=0;
    int os=0;
    cout << "Input Upper limit : ";
    cin>>ul;
    cout<<"\nEven Numbers : ";
    
    for(int i =2; i<=ul; i++)
    
    {
        if(i%2==0)
        {
            cout<<i<<" ";
            es+=1;
        }
    }
    cout<<"\nOdd Numbers : ";
    for(int i =1; i<=ul; i++)

    {
        if(i%2!=0)
        {
            cout<<i<<" ";
            os+=1;
        }

    }
    cout<<"\nEven sum: "<<es;
    cout<<"\nOdd sum: "<<os;
    x=os+es;
    cout<<"\n";
    cout<<"Total Sum : "<<x<<endl;
    return 0;
}
                              //3(a)
Check Notion
                              //3(b)
#include<iostream>
using namespace std;
int main()
{
int year;
cout<<" Input year to check whether its leap year or not: "<<endl;
cin>>  year  ;
if (year>=2024 or year<=0)
{
  cout<<"Invalid Input,Try Again"<<endl;
  cin>>year;
}
if(year % 4 == 0 and year % 100 != 0)
cout<<"Leap Year"<<endl;
else
cout<<"Not a Leap Year"<<endl;
return 0;
}
                              //3(c)
#include<iostream>
using namespace std;
int main()

{
int month;
cout<<" Input Month To Determine The Season: "<<endl;
cin>>  month  ;
if (month==1 or month==2 or month==12)
{
    cout<<"Winter"<<endl;
}
else if(month==3 or month==4 or month==5)
{
    cout<<"Spring"<<endl;
}
else if(month==6 or month==7 or month==8)
{
    cout<<"Summer"<<endl;
}
else if(month==9 or month==10 or month==11)
{
    cout<<"Autumn"<<endl;
}
else 
cout<< "Invalid Input,Try Again"<<endl;
return 0;
}
                              //4(a)
Check Notion
                              //4(b)
#include <iostream>
using namespace std;

int main() 
{
    int n;
    unsigned long long int factorial = 1; // Use unsigned long long to handle large factorials
    cout<<"Input positive integers to find their factorial:"<<endl;
    cin>>n;
    if (n<=0)
    {
        cout<<"Invalid input,Use positive integers."<<endl;
    }
    else
    {
        for ( int i = 1; i <= n; i++)
        {
            factorial*=i;
        }
        cout<<"Factorial of  "<<n<<" is "<<factorial<<endl;
    }
    return 0;
}
                              //4(c)
                 #include<iostream>
using namespace std;
int main()

{
int n1=1;
int n2=1;
int n=0;
cout<<" Input range to find fibonacci series: "<<endl;
cin>> n ;
int store;
for (int i = 1; i <= n; i++)
{
    store=n1+n2;
    cout<<store<<endl;
    n1=n2;
    n2=store;
}
return 0;
}             //5(a)
fibonacci nth?
                              //5(b)
#include<iostream>
using namespace std;
int main()

{
    int n;
    cout<<"Input size of array:"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Input Numbers to See The Reversed Output:"<<endl;
    for (int i = 0; i <=n-1; i++)
    {
        cin>>arr[i];
    }
    cout<<"Reversed Output:"<<endl;
    for (int k = n-1; k >= 0; k--)
    {
    cout<< arr[k]<<endl;
    }
    return 0;
}
                              //5(c)
#include <iostream>
#include<string>
using namespace std;
int main()
{
    string data[5][5];
    cout<<"Input data in the following format : \nRoll No\t   Name\t   City\t   Present\t";
    for (int i=0;i<=4;i++)
    {
    for(int j=0;j<=4;j++)
    {
        cin>>data[i][j];
    }
    }
    cout<<"Roll #\tName\tProgram\tCity\tPresent"<<endl;
    for (int i=0;i<=4;i++)
    {
    for(int j=0;j<=4;j++)
    {
        cout<<data[i][j] << "\t";
    }
    cout << endl;

    }
    return 0;
}
                              //6(a)
#include <iostream>
#include <string>
using namespace std;

string namer[100];
int q_arr[100];
int p_arr[100];
int maxxx=5;

void a_p()
{
    int id;
    string name;
    int quantity;
    int price;
    cout << "Input Id, Name, Quantity, Price:" << "  " << endl;
    cin >> id >> name >> quantity >> price;
    if (id>maxxx)
    {
        maxxx=id;
    }
    namer[id]=name;
    q_arr[id]=quantity;
    p_arr[id]=price;
}

void d_p(int maxxx)
{
    cout << "Id" << "    " << "Name" << "   " << "Quantity" << "   " << "Price" << "   " << endl;
    for (int i=0; i<=maxxx; i++)
        cout << i << "\t" << namer[i] << "\t" << q_arr[i] << "\t" << p_arr[i] << "\t" << endl;
}


void e_p()
{
    int id;
    string name;
    int quantity;
    int price;
    cout << "Input id :" << "  " << endl;
    cin >> id;
    if (id>maxxx)
    {
        maxxx=id;
    }

    cout << "Input new name" << " ";
    cin >> name;
    namer[id] = name;

    cout << "Input new quantity" << " ";
    cin >> quantity;
    q_arr[id] = quantity;

    cout << "Input new price" << " ";
    cin >> price;
    p_arr[id]=price;


}

void del_p()
{
    int id;
    cout << "Input Id :" << "  " << endl;
    cin >> id;
    if (id>maxxx)
    {
        maxxx=id;
    }
    namer[id]=" ";
    p_arr[id]=0;
    q_arr[id]=0;
}

bool leave (string confirm)
{
    if (confirm=="y" or confirm=="Y" or confirm=="yes")
        return false;
    else if (confirm=="n" or confirm=="N" or confirm=="no")
        return true;
    else
    {
        cout << "Invalid Input,Please Try Again!" << endl;
        return true;
    }
}

int calculateTotalQuantity()
{
    int totalQuantity = 0;
    for (int i = 0; i <= maxxx; i++)
    {
        totalQuantity += q_arr[i];
    }
    return totalQuantity;
}

int calculateTotalPrice()
{
    int totalPrice = 0;
    for (int i = 0; i <= maxxx; i++)
    {
        totalPrice += p_arr[i];
    }
    return totalPrice;
}

bool menu()
{
    int x;
    string confirm;
    bool working=true;
    cout<<" \t\t\t\t\t  \t   ";
    cout << "Product Management System\n\n";
    cout << "Instructions:\n\n";
    cout << "* ID can only contain digits.\n\n";
    cout << "* Same is the case for QUANTITY and PRICE.\n\n";
    cout << "* Try not to enter any alphabets or a collection of alphabets (words), as it will cause the loop to run infinitely.\n\n";
    cout << "* NAME can only contain alphabets or words.\n\n";
    cout << "* Try not to enter any digits, as it will cause the loop to run infinitely.\n\n";
    cout << "Note:\n     Incase if you got stuck in an unending cycle of output, exit the terminal (output screen) and try again.\n\n";
    cout << "Enter from the suitable options:" << endl;
    cout << endl;
    cout << "1- Add Products" << endl;
    cout << "2- Display Catalogue" << endl;
    cout << "3- Edit Product details" << endl;
    cout << "4- Delete Products" << endl;
    cout << "5- Sum Of Products" << endl;
    cout << "6- Exit PMS "<< endl;
    cout << endl;

    cin >> x;

    switch (x)
    {
    case 1:
        a_p();
        break;
    case 2:
        d_p(maxxx);
        break;
    case 3:
        e_p();
        break;
    case 4:
        del_p();
        break;
    case 5:
    {
        int totalQuantity = calculateTotalQuantity();
        int totalPrice = calculateTotalPrice();
        cout << "Total Quantity: " << totalQuantity << endl;
        cout << "Total Price: " << totalPrice << endl;
    }
    case 6:
        string confirm;
        cout << endl;
        cout << "Confirm Yes or No:" << " ";
        cin >> confirm;
        working = leave(confirm);
    }
    return working;
}

int main ()
{
    bool working = true;
    while (working)
    {
        working=menu();
    }
    return 0;
}
                              //7(a)
#include<iostream>
using namespace std;
int main()

{
    
    int arr[10];
    int *aptr=arr;
    cout<<"Input Ten Numbers to See The Reversed Output:"<<endl;
    for (int i = 0; i <=9; i++)
    {
        cin>>arr[i];
    }
    for (int k = 9; k >= 0; k--)
    {
    
        *aptr;
        aptr++;
    }
    cout<<"Reversed Output:"<<endl;
    for (int k =10; k >= 0; k--)
    {
        cout<<*aptr;
        aptr--;
        cout<<endl;
    }
    return 0;
}
                              //8(a)
#include<iostream>
using namespace std;
int main()

{
    
    int arr[10];
    int *aptr=arr;
    cout<<"Input Ten Numbers to See The Reversed Output:"<<endl;
    for (int i = 0; i <=9; i++)
    {
        cin>>arr[i];
    }
    for (int k = 9; k >= 0; k--)
    {
    
        *aptr;
        aptr++;
    }
    cout<<"Reversed Output:"<<endl;
    for (int k =10; k >= 0; k--)
    {
        cout<<*aptr;
        aptr--;
        cout<<endl;
    }
    return 0;
}
