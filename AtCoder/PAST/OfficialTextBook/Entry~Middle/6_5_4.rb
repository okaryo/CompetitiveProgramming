n,x = gets.split.map(&:to_i)
a = []
b = []
n.times do |i|
  if i % 2 == 0
    a << gets.to_i
  else
    b << gets.to_i
  end
end
hash = Hash.new
(1<<b.size).times do |bits|
  s = 0
  n.times do |i|
    if bits[i] != 0
      s += b[i]
    end
  end
  hash[s].nil? ? hash[s] = 1 : hash[s] += 1
end

ans = 0
(1<<a.size).times do |bits|
  s = 0
  n.times do |i|
    if bits[i] != 0
      s += a[i]
    end
  end
  ans += hash[x - s].to_i
end
puts(ans)
