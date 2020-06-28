l,r = gets.split.map(&:to_i)
l = gets.split.map(&:to_i)
r = gets.split.map(&:to_i)

l_array = Array.new(110, 0)
l.each do |x|
  l_array[x] += 1
end
r_array = Array.new(110, 0)
r.each do |x|
  r_array[x] += 1
end

ans = 0
110.times do |i|
  ans += [l_array[i], r_array[i]].min
end

puts ans