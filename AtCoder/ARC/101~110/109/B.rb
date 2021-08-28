N = gets.to_i
ok = 1
ng = (N+1) + 1
while ng - ok > 1 do
  mid = (ng + ok) / 2
  sum = (mid + 1) * mid / 2
  if sum <= N + 1
    ok = mid
  else
    ng = mid
  end
end
puts(N-ok+1)
