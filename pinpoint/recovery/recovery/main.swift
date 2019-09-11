//
//  main.swift
//  recovery
//
//  Created by s20181102934 on 2019/9/11.
//  Copyright © 2019 win. All rights reserved.
//

import Foundation
var index = ""
var k=0
var i=0
var max=0
while index != "end" {
    index=readLine()!
    if(index != "end"){
        k=Int(index)!
        if(k>max){
            max=k
        }
    }
}
print("最大值为：\( max )")


