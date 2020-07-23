n = gets.to_i

count = 0
n.times do
  v, w, x, y, z = gets.split.map(&:to_i)
  sum = v + w + x + y + z
  if 0 <= sum && sum < 20
    count += 1
  end
end

puts count
