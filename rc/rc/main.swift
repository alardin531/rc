//
//  main.swift
//  rc
//
//  Created by s20181102934 on 2019/9/6.
//  Copyright © 2019 win. All rights reserved.
//


//
//  main.swift
//  sd
//
//  Created by s20181102934 on 2019/9/4.
//  Copyright © 2019 win. All rights reserved.
//


//
//  main.swift
//  sd
//
//  Created by s20181102934 on 2019/9/4.
//  Copyright © 2019 win. All rights reserved.
//

var a:String
var b:String,c:String
print("enter username:\n")
a=readLine()!
if(a=="admin"){
    print("enter password:\n")
    b=readLine()!
    if(b=="88888888"){
        print("welcome\n")
        print("do you want to hold on?\n")
        c=readLine()!
        if(c=="yes"){
            print("it's so great,yu will be warm!")
        }
        else{
            while(c=="no"){
                print("you need to think twice\n")
                c=readLine()!
                if(c=="yes"){
                    print("yu love u")
                }
                
            }
        }
    }
    else{
        print("wrong password\n")
    }
}
else{
    print("username doesnt exist\n")
}







