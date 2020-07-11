s1 = gets.chomp
s2 = gets.chomp
s3 = gets.chomp

cnt_s1 = Array.new(26, 0)
cnt_s2 = Array.new(26, 0)
cnt_s3 = Array.new(26, 0)

n = s1.size

n.times do |i|
  cnt_s1[s1[i].ord - 'A'.ord] += 1
  cnt_s2[s2[i].ord - 'A'.ord] += 1
  cnt_s3[s3[i].ord - 'A'.ord] += 1
end

min_range_sum = 0
max_range_sum = 0

26.times do |i|
  min_range_sum += [0, cnt_s3[i] - cnt_s2[i]].max
  max_range_sum += [cnt_s3[i], cnt_s1[i]].min
end

if min_range_sum <= n / 2 && n / 2 <= max_range_sum
  puts 'YES'
else
  puts 'NO'
end
