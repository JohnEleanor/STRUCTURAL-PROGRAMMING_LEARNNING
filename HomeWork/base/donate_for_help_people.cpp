/*


 * ถุงยังชีพถุงหนึ่งประกอบไปด้วยนํา 3 ขวด ขนมปัง 4 ก้อนและ ไข่ต้ม 2 ฟอง หากกองบรรเทาทุกข์ได้รับ น้ํา ขนมปังและ ไข่ต้ม    
 * จากผู้บริจาคมาเป็นปริมาณ X ขวด y ก้อนและ 2 ฟอง ตามลําดับ กองบรรเทาทุกข์ จะจัดถุงยังชีพตามข้อกําหนดข้างต้นได้สูงสุดกี่ถุง
 * และจะเหลือของบริจาคแต่ละอย่างเป็นปริมาณเท่าใด จงเขียนโปรแกรมเพื่อรับปริมาณของบริจาคจากผู้ใช้เป็นเลขจํานวนเต็ม x, y และ 2 ตามลําดับ จากนั้น
 * โปรแกรมจะพิมพ์จํานวนผลลัพธ์ออกมา 4 ค่าดังนี้ ค่าแรกคือจํานวนถุงยังชีพที่มากที่สุดที่สามารถจัดได้ และค่าที่ 2 – 4 คือปริมาณน้ํา ขนมปัง และไข่ต้มที่เหลือจากการจัดใส่ถุงยังชีพตามลําดับ 
 TODO: 
    ? Enter the amount of water: 1200
    ? Enter the amount of bread: 1000
    ? Enter the amount of egg: 1000
    ? Result of Donation bag : 250
    ? The remaining amount of donated water : 450
    ? The remaining amount of donated bread : 0
    ? The remaining amount of donated egg : 500
 */

#include <iostream>
using namespace std;
int main() {
    int water = 0, bread = 0,egg = 0;
    cout << "Enter the amount of water: ";
    cin >> water;
    cout << "Enter the amount of bread: ";
    cin >> bread;
    cout << "Enter the amount of egg: ";
    cin >> egg;

    int water_div = water / 3;
    int bread_div = bread / 4;
    int egg_div = egg / 2;

    //? หาค่าที่น้อยที่สุด
    int maxBags = 0;
    
    if (water_div < bread_div and water_div  < egg_div)
    {
        maxBags = water_div;
    }else if (bread_div < water_div  and bread_div < egg_div )
    {
        maxBags = bread_div;
    }else
    {
        maxBags = egg_div;
    }

    int water_is_not_for_some_one = water - (maxBags * 3); 
    int bread_is_not_for_some_one = bread - (maxBags * 4); 
    int egg_is_not_for_some_one = egg - (maxBags * 2); 

    cout << "Result of Donation bag : " << maxBags << endl;
    cout << "The remaining amount of donated water : " << water_is_not_for_some_one << endl;
    cout << "The remaining amount of donated bread : " << bread_is_not_for_some_one << endl;
    cout << "The remaining amount of donated egg : " << egg_is_not_for_some_one << endl;
    return 0;
}

