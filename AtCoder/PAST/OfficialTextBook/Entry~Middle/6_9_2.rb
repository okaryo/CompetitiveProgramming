a,b,x = gets.split.map(&:to_i)
ok = 0
ng = 10**9 + 1
while ng - ok > 1 do
  mid = (ok + ng) / 2
  dn = mid.to_s.size
  p = a*mid + b*dn
  if p > x
    ng = mid
  else
    ok = mid
  end
end
puts ok
