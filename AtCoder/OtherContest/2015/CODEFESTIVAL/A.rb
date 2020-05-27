n, k, m, r = gets.split.map(&:to_i)
s = (n-1).times.map{gets.to_i} + [0]

goal = k * r
sum = s.max(k).reduce(:+)

if sum >= goal
  puts 0
else
  remain = goal - (s.max(k-1).reduce(:+) || 0)
  puts remain > m ? -1 : remain
end
