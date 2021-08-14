n = gets.to_i
ba = []
n.times do
  a,b = gets.split.map(&:to_i)
  ba << [b, a]
end
ba.sort!
ans = 0
last = 0
ba.each do |b, a|
  if a > last
    ans += 1
    last = b
  end
end
puts(ans)
