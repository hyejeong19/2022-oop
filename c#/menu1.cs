using System;
using System.Collections.Generic;
public class Menu {
    public Menu(){}
    
    public static int returnprice(string name) {
        Dictionary<string,int> dic = new Dictionary<string, int>()
        { {"jeongsik",5000},{"teuksik",7000},{"cider",2000},{"cock",2000}};
        return dic[name];
    }

}