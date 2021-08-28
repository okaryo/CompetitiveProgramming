n = gets.to_i
a = gets.split.map(&:to_i).sort.reverse

if n == 1
  puts 0
  exit
end

cnt = 2
ans = a.first
now_index = 1
while cnt < n do
  ans += a[now_index]
  cnt += 1
  if cnt != n
    ans += a[now_index]
    now_index += 1
    cnt += 1
    next
  end
end

puts ans