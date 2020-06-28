n,k = gets.split.map(&:to_i)
a = gets.split.map(&:to_i)

gcd_v = 0
max_a = 0
a.each do |a_v|
  max_a = [max_a, a_v].max
  gcd_v = a_v.gcd(gcd_v)
end

if max_a >= k && k % gcd_v == 0
  puts 'POSSIBLE'
else
  puts 'IMPOSSIBLE'
end
