n = gets.to_i
p = gets.split.map(&:to_i)
minv = 1
left_i = 0
now = 0
ans = []
while now < n
  if p[now] == minv
    is_impossible = (now == left_i) || (p[now] == now+1) || (now != n-1 && p[now-1] == now+1) || (left_i).upto(now-2).any? { |x| x + 2 != p[x] }
    if is_impossible
      puts -1
      exit 0
    end
    (now-1).downto(left_i) { |x| ans << x + 1 }
    p[now] = p[now - 1]
    left_i = now
    minv = now + 1
  end
  now += 1
end
puts ans
