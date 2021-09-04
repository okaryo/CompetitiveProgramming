N,Q = gets.split.map(&:to_i)
A = gets.split.map(&:to_i)
cnt = [0]
N.times do |i|
  cnt << A[i] - 1 - i
end
Q.times do
  k = gets.to_i
  if k > cnt.last
    puts(A.last + k - cnt.last)
  else
    ok = N
    ng = 0
    while ok - ng > 1 do
      mid = (ok + ng) / 2
      if cnt[mid] >= k
        ok = mid
      else
        ng = mid
      end
    end
    puts(A[ok-1] - 1 - cnt[ok] + k)
  end
end
