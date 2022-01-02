S = gets.chomp
l = S.size
a = []
l.times do |i|
  m = S[0, i]
  u = S[i, l - i]
  a << (u + m)
end
puts a.sort.first
puts a.sort.last
