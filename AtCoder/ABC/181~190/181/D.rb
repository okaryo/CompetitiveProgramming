S = gets.chomp
if S.size == 1
  if S.to_i % 8 == 0
    puts('Yes')
    exit 0
  else
    puts('No')
    exit 0
  end
end
if S.size == 2
  if S.to_i % 8 == 0 || (S[1].to_i * 10 + S[0].to_i) % 8 == 0
    puts('Yes')
    exit 0
  else
    puts('No')
    exit 0
  end
end
count = {}
('0'..'9').each do |x|
  count[x] = 0
end
S.chars.each do |c|
  count[c] += 1
end
max_i = S.chars.sort.reverse.join.to_i
t = 112
while t <= [999, max_i].min do
  count_dup = count.dup
  check = true
  t.to_s.chars.each do |c|
    if count_dup[c] > 0
      count_dup[c] -= 1
    else
      check = false
      break
    end
  end
  if check
    puts('Yes')
    exit 0
  end
  t += 8
end
puts('No')
