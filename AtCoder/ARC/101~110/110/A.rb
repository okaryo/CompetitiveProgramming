n = gets.to_i
l = 2
2.upto(n) do |i|
  l = l.lcm(i)
end
puts l + 1
