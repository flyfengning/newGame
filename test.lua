 --[[local tabFiles = {  
 [3] = "test2",  
 [6] = "test3",  
 [4] = "test1"  
}     
 for k, v in ipairs(tabFiles) do  
   print(k, v)  
  end ]]

 --[[local tabFiles = {  
 [3] = "test2",  
 [6] = "test3",  
 [4] = "test1"  
}     
 for k, v in pairs(tabFiles) do  
   print(k, v)  
  end ]]
 
 --[[tbl = {"alpha", "beta", [3] = "uno", ["two"] = "dos"}  
  
 for i,v in ipairs(tbl) do    --输出前三个  
      print( tbl[i] )  
 end]]

 function sayHello(  )
 	print("Hello")
 	local function init()
 		print("init")
 	end
 	init()
 end
sayHello()


