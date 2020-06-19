n = gets.to_i
r = gets.split.map(&:to_i)

dir_a = :up
cnt_a = 1

dir_b = :down
cnt_b = 1

1.upto(n-1) do |i|
  if dir_a == :up && r[i-1] < r[i]
    cnt_a += 1
    dir_a = :down
  elsif dir_a == :down && r[i-1] > r[i]
    cnt_a += 1
    dir_a = :up
  end

  if dir_b == :up && r[i-1] < r[i]
    cnt_b += 1
    dir_b = :down
  elsif dir_b == :down && r[i-1] > r[i]
    cnt_b += 1
    dir_b = :up
  end
end

cnt_a = 0 if cnt_a < 3
cnt_b = 0 if cnt_b < 3

puts [cnt_a, cnt_b].max