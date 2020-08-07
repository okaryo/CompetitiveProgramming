s = gets.chomp
n = s.length

l_ar = Array.new(n+1, 0)
r_ar = Array.new(n+1, 0)

l_sum = 0
n.times do |i|
  if s[i] == '<'
    l_sum += 1
  else
    l_sum = 0
  end
  l_ar[i+1] = l_sum
end

r_sum = 0
(n-1).downto(0) do |i|
  if s[i] == '>'
    r_sum += 1
  else
    r_sum = 0
  end
  r_ar[i] = r_sum
end

sum = 0
(n+1).times do |i|
  sum += [l_ar[i], r_ar[i]].max
end

puts sum
