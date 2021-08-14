n = gets.to_i
x = Array.new(n) {[]}
n.times do |i|
  a,b = gets.split.map(&:to_i)
  x[a-1] << b
end
cnt = Array.new(101, 0)
ans = 0
n.times do |day|
  x[day].each do |b|
    cnt[b] += 1
  end
  100.downto(0) do |b|
    if cnt[b] > 0
      ans += b
      cnt[b] -= 1
      break
    end
  end
  puts(ans)
end
