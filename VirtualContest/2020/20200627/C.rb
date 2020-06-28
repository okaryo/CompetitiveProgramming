a,b,x = gets.split.map(&:to_i)

l = a / x
m = b / x
if a % x == 0
  puts m - l + 1
else
  puts m - l
end