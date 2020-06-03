n, k = gets.split.map(&:to_i)
a = gets.split.map(&:to_i)

t = Array.new(n, -1)
now = 0
cnt = 0
check = -1
while true
  if t[now] != -1
    check = now
    break
  end
  t[now] = cnt
  now = a[now] - 1
  cnt += 1
end

if k - t[check] <= 0
  now = 0
  k.times do
    now = a[now] - 1
  end

  puts now + 1
else
  now = check
  y = (k - t[check]) % (cnt - t[check])
  y.times do
    now = a[now] - 1
  end

  puts now + 1
end