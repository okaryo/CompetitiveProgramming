N = gets.to_i
a = gets.split.map(&:to_i)
b = gets.split.map(&:to_i).sort
semi_x = []
b.each do |bi|
  semi_x << (a.first ^ bi)
end
semi_x.uniq!
ans = []
semi_x.each do |x|
  t = []
  a.each do |ai|
    t << (x ^ ai)
  end
  t.sort!
  if b == t
    ans << x
  end
end
ans.sort!
puts(ans.size)
puts(ans)
