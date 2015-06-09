--[[print("aaaa")
b=10
print(b)]]
--[[print("Hello".."World")
print("10".."20")
print(10 ..20)]]
--[[function max(a,b)
 if a>b then
  return a
 else
   return b
 end
end
print(max(5,10))]]

--[[for var=1,100, 2 do
print(var)
end]]
Config={hello="Hello Lua",age=50}
Config.words="Hello World"
Config.number=100
--print(Config["hello"])
--print(Config.words)
--print(Config.number)
for key,var in pairs(Config) do
	--print(key,var)
end

--[[days = {key="aaaa","Sunday", "Monday", "Tuesday", "Wednesday",
"Thursday", "Friday", "Saturday"}
print(days[5])
for key,var in pairs(days) do
	print(key,var)
end]]

--[[arr={1,2,3,4,"Hello"}
for key,var in pairs(arr) do
  print(key,var)
end]]
--[[arr={}
for var=1,100 do
 table.insert(arr,1,var)
end
for key,var in pairs(arr) do
	print(var)
end
print(table.maxn(arr))
print(#arr)]]
local tabFiles = {  
 [1] = "test2",  
 [3] = "test3",  
 [4] = "test1"  
}     
 for k, v in ipairs(tabFiles) do  
   print(k, v)  
  end 








