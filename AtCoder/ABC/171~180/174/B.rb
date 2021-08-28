n,d = gets.split.map(&:to_i)
sum = 0
n.times do
  x,y = gets.split.map(&:to_i)
  dist = Math.sqrt(x * x + y * y)
  if dist <= d
    sum += 1
  end
end

puts sum
