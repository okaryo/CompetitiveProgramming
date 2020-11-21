n = gets.to_i
a = gets.split.map(&:to_i)

max_a = a.max
ans = 0
max_count = 0
2.upto(max_a) do |i|
  count = 0
  a.each do |ai|
    count += 1 if ai % i == 0
  end
  if count > max_count
    ans = i
    max_count = count
  end
end

puts ans
