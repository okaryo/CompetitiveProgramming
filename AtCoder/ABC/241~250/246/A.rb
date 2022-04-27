x1,y1 = gets.split.map(&:to_i)
x2,y2 = gets.split.map(&:to_i)
x3,y3 = gets.split.map(&:to_i)
if x1 == x2
  ans_x = x3
elsif x2 == x3
  ans_x = x1
elsif x1 == x3
  ans_x = x2
end

if y1 == y2
  ans_y = y3
elsif y1 == y3
  ans_y = y2
elsif y2 == y3
  ans_y = y1
end

puts "#{ans_x} #{ans_y}"
