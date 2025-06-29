#include <iostream>
using namespace std;
class cartitem
{
public:
    string name;
    int quantity;
    float price_per_unit;
};

class hotselling
{
public:
    string name;
    int quantity;
    float price;
};
class cereals
{
public:
    string name;
    int quantity;
    float price;
};
class vegetables
{
public:
    string name;
    int quantity;
    float price;
};
class seafood
{
public:
    string name;
    int quantity;
    float price;
};
class bread
{
public:
    string name;
    int quantity;
    float price;
};
class meat
{
public:
    string name;
    int quantity;
    float price;
};
class fruits
{
public:
    string name;
    int quantity;
    float price;
};
class sweets
{
public:
    string name;
    int quantity;
    float price;
};
// line printing
void line()
{
    cout << "-------------------------------------------------------";
}
// main menu for categories
void printmainmenu()
{
    cout << endl;
    line();
    

    cout << endl<<endl<<"                    " << "BIN DAUD STORE" << "            " << endl<<endl;
    line();
    cout << endl;
    cout << "             Buy now and get 15% discount          " << endl;
    line();

    cout << endl;
    cout << "0-Hot Selling products" << endl;
    cout << endl;
    cout << "1-Cereals" << endl;
    cout << endl;
    cout << "2-Vegetables" << endl;
    cout << endl;
    cout << "3-Seafood" << endl;
    cout << endl;
    cout << "4-Bread and Breakfast" << endl;
    cout << endl;
    cout << "5-Meat" << endl;
    cout << endl;
    cout << "6-Fruits" << endl;
    cout << endl;
    cout << "7-Sweets" << endl;
    cout << endl;
    cout << "8-Go to billing" << endl;
    cout << endl;
    cout << "9-End shopping" << endl;
    cout << endl;
    cout << "      " << "ENTER THE SLOT TO BUY PRODUCT : ";
}
// hotselling menu
void printmenu(hotselling *s)
{

    cout << endl;
    cout << " Hot selling products are as follows :" << endl;
    for (int i = 0; i < 4; i++)
    {
        cout << endl;
        cout << i << "- " << s[i].name << endl;
    }
}
// hotselling product detail
void print(hotselling s)
{
    cout << endl
         << " Product Name : " << s.name << endl;
    cout << endl;
    cout << " Price : " << s.price << endl;
    cout << endl;
    cout << " Quantity Available : " << s.quantity << endl;
    cout << endl;
}
// cereal product detail
void printcereals(cereals s)
{
    cout << endl
         << " Product Name : " << s.name << endl;
    cout << endl;
    cout << " Price : " << s.price << endl;
    cout << endl;
    cout << " Quantity Available : " << s.quantity << endl;
    cout << endl;
}
// cereal menu
void printcerealsmenu(cereals *c)
{

    cout << endl;
    cout << " Cereal products are as follows :" << endl;
    for (int i = 0; i < 4; i++)
    {
        cout << endl;
        cout << i << "- " << c[i].name << endl;
    }
}
// vegetable menu
void printvegetablesmenu(vegetables *v)
{

    cout << endl;
    cout << " Vegetable products are as follows :" << endl;
    for (int i = 0; i < 4; i++)
    {
        cout << endl;
        cout << i << "- " << v[i].name << endl;
    }
}
// vegetable product detail
void printvegetables(vegetables v)
{
    cout << endl
         << " Product Name : " << v.name << endl;
    cout << endl;
    cout << " Price : " << v.price << endl;
    cout << endl;
    cout << " Quantity Available : " << v.quantity << endl;
    cout << endl;
}
// seafood menu
void printseafoodmenu(seafood *d)
{

    cout << endl;
    cout << " Seafood products are as follows :" << endl;
    for (int i = 0; i < 4; i++)
    {
        cout << endl;
        cout << i << "- " << d[i].name << endl;
    }
}
// seafood product detail
void printseafood(seafood d)
{
    cout << endl
         << " Product Name : " << d.name << endl;
    cout << endl;
    cout << " Price : " << d.price << endl;
    cout << endl;
    cout << " Quantity Available : " << d.quantity << endl;
    cout << endl;
}
// breakfast menu
void printbfmenu(bread *b)
{

    cout << endl;
    cout << " Breakfast products are as follows :" << endl;
    for (int i = 0; i < 4; i++)
    {
        cout << endl;
        cout << i << "- " << b[i].name << endl;
    }
}
// breakfast product detail
void printbf(bread b)
{
    cout << endl
         << " Product Name : " << b.name << endl;
    cout << endl;
    cout << " Price : " << b.price << endl;
    cout << endl;
    cout << " Quantity Available : " << b.quantity << endl;
    cout << endl;
}
// meat menu
void printmeatmenu(meat *m)
{

    cout << endl;
    cout << " Meat products are as follows :" << endl;
    for (int i = 0; i < 4; i++)
    {
        cout << endl;
        cout << i << "- " << m[i].name << endl;
    }
}
// meat product detail
void printmeat(meat m)
{
    cout << endl
         << " Product Name : " << m.name << endl;
    cout << endl;
    cout << " Price : " << m.price << endl;
    cout << endl;
    cout << " Quantity Available : " << m.quantity << endl;
    cout << endl;
}
// fruits menu
void printfruitsmenu(fruits *f)
{

    cout << endl;
    cout << " Fruit products are as follows :" << endl;
    for (int i = 0; i < 4; i++)
    {
        cout << endl;
        cout << i << "- " << f[i].name << endl;
    }
}
// fruits product detail
void printfruits(fruits f)
{
    cout << endl
         << " Product Name : " << f.name << endl;
    cout << endl;
    cout << " Price : " << f.price << endl;
    cout << endl;
    cout << " Quantity Available : " << f.quantity << endl;
    cout << endl;
}
// sweets menu
void printsweetsmenu(sweets *w)
{

    cout << endl;
    cout << " Sweets products are as follows :" << endl;
    for (int i = 0; i < 4; i++)
    {
        cout << endl;
        cout << i << "- " << w[i].name << endl;
    }
}
// sweets product detail
void printsweets(sweets w)
{
    cout << endl
         << " Product Name : " << w.name << endl;
    cout << endl;
    cout << " Price : " << w.price << endl;
    cout << endl;
    cout << " Quantity Available : " << w.quantity << endl;
    cout << endl;
}
int main()
{

    // inventory for hot selling
    hotselling *s = new hotselling[4];

    // product 1

    s[0].name = " Roh-E-Afza ";
    s[0].price = 1400;
    s[0].quantity = 20;

    // product 2

    s[1].name = " Tuna fish ";
    s[1].price = 15000;
    s[1].quantity = 50;

    // product 3

    s[2].name = " 7UP(Pack of 6) ";
    s[2].price = 1499;
    s[2].quantity = 30;

    // product 4

    s[3].name = " Mangoes ";
    s[3].price = 1499;
    s[3].quantity = 60;

    // inventory for cereals

    cereals *c = new cereals[4];

    // product 1

    c[0].name = " Rice ";
    c[0].price = 240;
    c[0].quantity = 120;

    // product 2

    c[1].name = " Wheat ";
    c[1].price = 500;
    c[1].quantity = 500;

    // product 3

    c[2].name = " Oats ";
    c[2].price = 149;
    c[2].quantity = 30;

    // product 4

    c[3].name = " Corn ";
    c[3].price = 299;
    c[3].quantity = 70;

    // inventory for vegetable

    vegetables *v = new vegetables[4];

    // product 1

    v[0].name = " Tomato ";
    v[0].price = 150;
    v[0].quantity = 120;

    // product 2

    v[1].name = " Potato ";
    v[1].price = 100;
    v[1].quantity = 500;

    // product 3

    v[2].name = " Eggplant ";
    v[2].price = 170;
    v[2].quantity = 130;

    // product 4

    v[3].name = " Lady Finger ";
    v[3].price = 199;
    v[3].quantity = 40;

    // inventory for seafood
    seafood *d = new seafood[4];

    // product 1

    d[0].name = " Shrimp ";
    d[0].price = 1900;
    d[0].quantity = 15;

    // product 2

    d[1].name = " Tuna fish ";
    d[1].price = 15000;
    d[1].quantity = 50;

    // product 3

    d[2].name = " Lobster ";
    d[2].price = 9999;
    d[2].quantity = 3;

    // product 4

    d[3].name = " Trout ";
    d[3].price = 2499;
    d[3].quantity = 10;

    // inventory for breakfast
    bread *b = new bread[4];

    // product 1
    b[0].name = " Bread ";
    b[0].price = 190;
    b[0].quantity = 70;

    // product 2

    b[1].name = " Eggs ";
    b[1].price = 346;
    b[1].quantity = 17;

    // product 3

    b[2].name = " Mango Jam ";
    b[2].price = 799;
    b[2].quantity = 3;

    // product 4

    b[3].name = " BlueBand ";
    b[3].price = 199;
    b[3].quantity = 20;

    // inventory for meat
    meat *m = new meat[4];

    // product 1

    m[0].name = " Mutton ";
    m[0].price = 2400;
    m[0].quantity = 19;

    // product 2

    m[1].name = " Beef ";
    m[1].price = 1999;
    m[1].quantity = 30;

    // product 3

    m[2].name = " Camel Meat ";
    m[2].price = 2799;
    m[2].quantity = 2;

    // product 4

    m[3].name = " Chicken ";
    m[3].price = 399;
    m[3].quantity = 18;

    // inventory for fruits
    fruits *f = new fruits[4];

    // product 1

    f[0].name = " Banana ";
    f[0].price = 140;
    f[0].quantity = 20;

    // product 2

    f[1].name = " Pineapple ";
    f[1].price = 1500;
    f[1].quantity = 10;

    // product 3

    f[2].name = " Apple ";
    f[2].price = 199;
    f[2].quantity = 8;

    // product 4

    f[3].name = " Mangoes ";
    f[3].price = 1499;
    f[3].quantity = 60;

    // inventory for sweets
    sweets *w = new sweets[4];

    // product 1

    w[0].name = " DairyMilk ";
    w[0].price = 250;
    w[0].quantity = 13;

    // product 2

    w[1].name = " YOU sweetmilk chocholate ";
    w[1].price = 150;
    w[1].quantity = 5;

    // product 3

    w[2].name = " Tobelerone ";
    w[2].price = 499;
    w[2].quantity = 3;

    // product 4

    w[3].name = " Twix ";
    w[3].price = 399;
    w[3].quantity = 6;
    // for total items
    cartitem *cart = new cartitem[100];
    int cartIndex = 0;
    // printing menu

    int prodincart = 0;
    float totalprice = 0;
    printmainmenu();
    int sel;
    cin >> sel;
    line();
    // hotselling
    while (sel != 9)
    {

        // for hotselling
        if (sel == 0)
        {

            printmenu(s);
            line();
            int selhot = -1;
            cout << endl
                 << "      CHOOSE THE PRODUCT : ";
            cin >> selhot;
            while (selhot > 3 || selhot < 0)
            {
                cout << "NOT IN RANGE, ENTER VALUE AGAIN : ";

                cin >> selhot;
            }

            if (selhot == 9)
            {
                line();
                printmainmenu();
            }
            else
            {
                // PRINTING PRODUCT DETAIL
                line();

                print(s[selhot]);

                line();

                cout << endl;

                cout << endl
                     << "Enter the quantity to buy : ";
                int quantity = 0;
                cin >> quantity;

                while (quantity > s[selhot].quantity || quantity < 0 ){
                    cout << endl
                         << "The required amount is not in stock ! "<<endl<<"Enter the value again : ";
                cin >> quantity;

                }
                 if (quantity >= 1)
                {
                    // for final
                    cart[cartIndex].name = s[selhot].name;
                    cart[cartIndex].quantity = quantity;
                    cart[cartIndex].price_per_unit = s[selhot].price;
                    cartIndex++;

                    s[selhot].quantity = s[selhot].quantity - quantity;
                    totalprice += s[selhot].price * quantity;
                    prodincart += quantity;
                    quantity = 0;

                    cout << "Enter 9 to go back to menu : ";
                    cout << endl;
                    line();
                    cout << endl
                         << "                       Total products in your carts : " << prodincart;
                    cout << endl
                         << "                       TOTAL = " << totalprice << endl;
                    line();
                }
                printmainmenu();
                sel = -1;
                cin >> sel;
            }
        }
        // for cereals
        else if (sel == 1)
        {

            printcerealsmenu(c);

            int selcereal = -1;
            cout << endl
                 << "      CHOOSE THE PRODUCT : ";
            cin >> selcereal;
            while (selcereal > 3 || selcereal < 0)
            {
                cout << "NOT IN RANGE, ENTER VALUE AGAIN : ";

                cin >> selcereal;
            }

            line();
            if (selcereal == 9)
            {
                printmainmenu();
                line();
            }
            else
            {
                // PRINTING PRODUCT DETAIL
                printcereals(c[selcereal]);
                line();

                cout << endl;

                cout << endl
                     << "Enter the quantity to buy : ";
                int quantity = 0;
                cin >> quantity;

                 while (quantity > c[selcereal].quantity || quantity < 0 ){
                    cout << endl
                         << "The required amount is not in stock ! "<<endl<<"Enter the value again : ";
                cin >> quantity;

                }
                 if (quantity >= 1)
                {
                    // for final
                    cart[cartIndex].name = c[selcereal].name;
                    cart[cartIndex].quantity = quantity;
                    cart[cartIndex].price_per_unit = c[selcereal].price;
                    cartIndex++;
                    c[selcereal].quantity = c[selcereal].quantity - quantity;
                    totalprice += c[selcereal].price * quantity;
                    prodincart += quantity;
                    quantity = 0;

                    cout << "Enter 9 to go back to menu : ";
                    cout << endl;
                    line();
                    cout << endl
                         << "                       Total products in your carts : " << prodincart;
                    cout << endl
                         << "                       TOTAL = " << totalprice << endl;
                    line();
                    cout << endl;
                }
                printmainmenu();
                sel = -1;
                cin >> sel;
                line();
            }
        }

        // for vegetables
        else if (sel == 2)
        {

            printvegetablesmenu(v);

            int selveg = -1;
            cout << endl
                 << "      CHOOSE THE PRODUCT : ";
            cin >> selveg;
            while (selveg > 3 || selveg < 0)
            {
                cout << "NOT IN RANGE, ENTER VALUE AGAIN : ";

                cin >> selveg;
            }

            line();

            if (selveg == 9)
            {
                printmainmenu();
                line();
            }
            else
            {
                // PRINTING PRODUCT DETAIL
                printvegetables(v[selveg]);
                line();

                cout << endl;

                cout << endl
                     << "Enter the quantity to buy : ";
                int quantity = 0;
                cin >> quantity;

                 while (quantity >v[selveg].quantity || quantity < 0 ){
                    cout << endl
                         << "The required amount is not in stock ! "<<endl<<"Enter the value again : ";
                cin >> quantity;

                }
                 if (quantity >= 1)
                {
                    // for final
                    cart[cartIndex].name = v[selveg].name;
                    cart[cartIndex].quantity = quantity;
                    cart[cartIndex].price_per_unit = v[selveg].price;
                    cartIndex++;
                    v[selveg].quantity = v[selveg].quantity - quantity;
                    totalprice += v[selveg].price * quantity;
                    prodincart += quantity;
                    quantity = 0;

                    cout << "Enter 9 to go back to menu : ";
                    cout << endl;
                    line();
                    cout << endl
                         << "                       Total products in your carts : " << prodincart;
                    cout << endl
                         << "                       TOTAL = " << totalprice << endl;
                    line();
                }
                printmainmenu();
                sel = -1;
                cin >> sel;
                line();
            }
        }
        // for seafood
        else if (sel == 3)
        {

            printseafoodmenu(d);

            int selsea = -1;
            cout << endl
                 << "      CHOOSE THE PRODUCT : ";
            cin >> selsea;

            while (selsea > 3 || selsea < 0)
            {
                cout << "NOT IN RANGE, ENTER VALUE AGAIN : ";

                cin >> selsea;
            }

            line();

            if (selsea == 9)
            {
                printmainmenu();
                line();
            }
            else
            {
                // PRINTING PRODUCT DETAIL
                printseafood(d[selsea]);

                line();

                cout << endl;

                cout << endl
                     << "Enter the quantity to buy : ";
                int quantity = 0;
                cin >> quantity;

               while (quantity > d[selsea].quantity || quantity < 0 ){
                    cout << endl
                         << "The required amount is not in stock ! "<<endl<<"Enter the value again : ";
                cin >> quantity;

                }
                 if (quantity >= 1)
                {
                    // for final
                    cart[cartIndex].name = d[selsea].name;
                    cart[cartIndex].quantity = quantity;
                    cart[cartIndex].price_per_unit = d[selsea].price;
                    cartIndex++;
                    d[selsea].quantity = d[selsea].quantity - quantity;
                    totalprice += d[selsea].price * quantity;
                    prodincart += quantity;
                    quantity = 0;

                    cout << "Enter 9 to go back to menu : ";
                    cout << endl;
                    line();
                    cout << endl
                         << "                       Total products in your carts : " << prodincart;
                    cout << endl
                         << "                       TOTAL = " << totalprice << endl;
                    line();
                }
                printmainmenu();
                sel = -1;
                cin >> sel;
                line();
            }
        }
        // for breakfast
        else if (sel == 4)
        {

            printbfmenu(b);

            int selbf = -1;
            cout << endl
                 << "      CHOOSE THE PRODUCT : ";
            cin >> selbf;
            while (selbf > 3 || selbf < 0)
            {
                cout << "NOT IN RANGE, ENTER VALUE AGAIN : ";

                cin >> selbf;
            }

            line();

            if (selbf == 9)
            {
                printmainmenu();
                line();
            }
            else
            {
                // PRINTING PRODUCT DETAIL
                printbf(b[selbf]);

                line();

                cout << endl;

                cout << endl
                     << "Enter the quantity to buy : ";
                int quantity = 0;
                cin >> quantity;

                while (quantity > b[selbf].quantity || quantity < 0 ){
                    cout << endl
                         << "The required amount is not in stock ! "<<endl<<"Enter the value again : ";
                cin >> quantity;

                }
                 if (quantity >= 1)
                {
                    // for final
                    cart[cartIndex].name = b[selbf].name;
                    cart[cartIndex].quantity = quantity;
                    cart[cartIndex].price_per_unit = b[selbf].price;
                    cartIndex++;
                    b[selbf].quantity = b[selbf].quantity - quantity;
                    totalprice += b[selbf].price * quantity;
                    prodincart += quantity;
                    quantity = 0;

                    cout << "Enter 9 to go back to menu : ";
                    cout << endl;
                    line();
                    cout << endl
                         << "                       Total products in your carts : " << prodincart;
                    cout << endl
                         << "                       TOTAL = " << totalprice << endl;
                    line();
                }
                printmainmenu();
                sel = -1;
                cin >> sel;
                line();
            }
        }
        // for meat food
        else if (sel == 5)
        {

            printmeatmenu(m);

            int selm = -1;
            cout << endl
                 << "      CHOOSE THE PRODUCT : ";
            cin >> selm;
            while (selm > 3 || selm < 0)
            {
                cout << "NOT IN RANGE, ENTER VALUE AGAIN : ";

                cin >> selm;
            }

            line();

            if (selm == 9)
            {
                printmainmenu();
                line();
            }
            else
            {
                // PRINTING PRODUCT DETAIL
                printmeat(m[selm]);

                line();

                cout << endl;

                cout << endl
                     << "Enter the quantity to buy : ";
                int quantity = 0;
                cin >> quantity;

                while (quantity > m[selm].quantity || quantity < 0 ){
                    cout << endl
                         << "The required amount is not in stock ! "<<endl<<"Enter the value again : ";
                cin >> quantity;

                }
                if (quantity >= 1)
                {
                    // for final
                    cart[cartIndex].name = m[selm].name;
                    cart[cartIndex].quantity = quantity;
                    cart[cartIndex].price_per_unit = m[selm].price;
                    cartIndex++;
                    m[selm].quantity = m[selm].quantity - quantity;
                    totalprice += m[selm].price * quantity;
                    prodincart += quantity;
                    quantity = 0;

                    cout << "Enter 9 to go back to menu : ";
                    cout << endl;
                    line();

                    cout << endl
                         << "                       Total products in your carts : " << prodincart;
                    cout << endl
                         << "                       TOTAL = " << totalprice << endl;
                    line();
                }
                printmainmenu();
                sel = -1;
                cin >> sel;
                line();
            }
        }
        // for fruits
        else if (sel == 6)
        {

            printfruitsmenu(f);

            int self = -1;
            cout << endl
                 << "      CHOOSE THE PRODUCT : ";
            cin >> self;
            while (self > 3 || self < 0)
            {
                cout << "NOT IN RANGE, ENTER VALUE AGAIN : ";

                cin >> self;
            }

            if (self == 9)
            {
                printmainmenu();
                line();
            }
            else
            {
                // PRINTING PRODUCT DETAIL
                printfruits(f[self]);
                line();

                cout << endl;

                cout << endl
                     << "Enter the quantity to buy : ";
                int quantity = 0;
                cin >> quantity;

                while (quantity > f[self].quantity || quantity < 0 ){
                    cout << endl
                         << "The required amount is not in stock ! "<<endl<<"Enter the value again : ";
                cin >> quantity;

                }
                if (quantity >= 1)
                {
                    // for final
                    cart[cartIndex].name = f[self].name;
                    cart[cartIndex].quantity = quantity;
                    cart[cartIndex].price_per_unit = f[self].price;
                    cartIndex++;
                    f[self].quantity = f[self].quantity - quantity;
                    totalprice += f[self].price * quantity;
                    prodincart += quantity;
                    quantity = 0;

                    cout << "Enter 9 to go back to menu : ";
                    cout << endl;
                    line();

                    cout << endl
                         << "                       Total products in your carts : " << prodincart;
                    cout << endl
                         << "                       TOTAL = " << totalprice << endl;
                    line();
                }
                printmainmenu();
                sel = -1;
                cin >> sel;
                line();
            }
        }
        // for sweets
        else if (sel == 7)
        {

            printsweetsmenu(w);

            int selsw = -1;
            cout << endl
                 << "      CHOOSE THE PRODUCT : ";
            cin >> selsw;
            while (selsw > 3 || selsw < 0)
            {
                cout << "NOT IN RANGE, ENTER VALUE AGAIN : ";

                cin >> selsw;
            }
            line();

            if (selsw == 9)
            {
                printmainmenu();
                line();
            }
            else
            {
                // PRINTING PRODUCT DETAIL
                printsweets(w[selsw]);

                line();
                cout << endl;

                cout << endl
                     << "Enter the quantity to buy : ";
                int quantity = 0;
                cin >> quantity;

                while (quantity > w[selsw].quantity || quantity < 0 ){
                    cout << endl
                         << "The required amount is not in stock ! "<<endl<<"Enter the value again : ";
                cin >> quantity;

                }
                if (quantity >= 1)
                {
                    // for final
                    cart[cartIndex].name = w[selsw].name;
                    cart[cartIndex].quantity = quantity;
                    cart[cartIndex].price_per_unit = w[selsw].price;
                    cartIndex++;
                    w[selsw].quantity = w[selsw].quantity - quantity;
                    totalprice += w[selsw].price * quantity;
                    prodincart += quantity;
                    quantity = 0;

                    cout << "Enter 9 to go back to menu : ";
                    cout << endl;
                    line();

                    cout << endl
                         << "                       Total products in your carts : " << prodincart;
                    cout << endl
                         << "                       TOTAL = " << totalprice << endl;
                    line();
                }
                printmainmenu();
                sel = -1;
                cin >> sel;
                line();
            }
        }
        // biling part
        if (sel == 8)
        {

            cout << endl;

            cout << "                   " << "BIN DAUD STORE" << "               " << endl;
            line();
            cout << endl
                 << endl;
            cout << "   MAIN BAZAR LAHORE ROAD, LAHORE" << endl;
            cout << "   " << "PH#03268070350" << "                  " << "RTO LAHORE" << endl;
            cout << "   NTN : " << "     7394909" << endl
                 << endl;
            cout << "                   " << "STORE INVOICE" << "         " << endl
                 << endl;
            cout << "Pay Mode :    Cash" << endl;
            cout << "Cashier Name/ID : Abdul Rahman   " << endl;
            line();
            cout << endl;
            cout << "Sr#             Price    GST     QTY      TOTAL " << endl;
            line();
            cout << endl
                 << endl;
            for (int i = 0; i < cartIndex; i++)
{
    cout << cart[i].name;

    // Adjust spacing based on name length
    int len = cart[i].name.length();
    if (len < 8)
        cout << "\t\t";
    else if (len < 16)
        cout << "\t";
    else
        cout << "";

    cout << cart[i].price_per_unit << "\t";
    cout << "0%\t";
    cout << cart[i].quantity << "\t";
    cout << cart[i].price_per_unit * cart[i].quantity << endl << endl;
}

            cout << endl;
            line();
            cout << endl;
            cout << "             Gross Amount                    " << totalprice << endl;
            float dis = 0.15 * totalprice;
            cout << "            Special Discount                  " << dis << endl;
            float gst = 0.18 * totalprice;
            cout << "                 GST                         " << gst << endl;
            line();
            float net = totalprice + gst - dis;
            cout << endl
                 << "               NET AMOUNT              " << net << endl
                 << endl;
            cout << "PAY THE AMOUNT : ";
            int pay;
            cin >> pay;
            cout << endl
                 << "               RECEIVED              " << pay << endl;
            cout << endl
                 << "               BALANCE              " << net - pay << endl;

            line();

            cout << endl;
                 
            line();
            return 0;
        }
    }
}
