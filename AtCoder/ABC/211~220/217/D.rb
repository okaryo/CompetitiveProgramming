L,Q = gets.split.map(&:to_i)
cut_line = [0, L]
Q.times do
  c,x = gets.split.map(&:to_i)
  if c == 1
    ok = cut_line.length - 1
    ng = 0
    while ok - ng > 1 do
      mid = (ok + ng) / 2
      if cut_line[mid] >= x
        ok = mid
      else
        ng = mid
      end
    end
    cut_line.insert(ok, x)
  else
    ok = cut_line.length - 1
    ng = 0
    while ok - ng > 1 do
      mid = (ok + ng) / 2
      if cut_line[mid] >= x
        ok = mid
      else
        ng = mid
      end
    end
    puts(cut_line[ok] - cut_line[ok-1])
  end
end
