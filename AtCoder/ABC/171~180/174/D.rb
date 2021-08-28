n = gets.to_i
c = gets.chomp
w_cnt = c.count('R')
ans = w_cnt
w_cnt.times do |i|
  if c[i] == 'R'
    ans -= 1
  end
end
puts ans
